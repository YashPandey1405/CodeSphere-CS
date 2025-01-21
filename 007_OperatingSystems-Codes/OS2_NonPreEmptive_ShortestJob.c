#include <stdio.h>

struct Process {
    int pid , arrivalTime , burstTime;
    int remainingTime , completionTime;
    int waitingTime , turnaroundTime;
};

void calculateTimes(struct Process processes[], int n) {
    int complete = 0, currentTime = 0, minTime = 100000;
    int shortest = 0, finishTime;
    int check = 0;

    while (complete != n) {
        for (int i = 0; i < n; i++) {
            if ((processes[i].arrivalTime <= currentTime) && 
                (processes[i].remainingTime < minTime) && 
                processes[i].remainingTime > 0) {
                minTime = processes[i].remainingTime;
                shortest = i;
                check = 1;
            }
        }

        if (check == 0) {
            currentTime++;
            continue;
        }

        processes[shortest].remainingTime--;
        minTime = processes[shortest].remainingTime;

        if (minTime == 0) {
            minTime = 100000;
        }

        if (processes[shortest].remainingTime == 0) {
            complete++;
            check = 0;

            finishTime = currentTime + 1;
            processes[shortest].completionTime = finishTime;
            processes[shortest].turnaroundTime = finishTime - processes[shortest].arrivalTime;
            processes[shortest].waitingTime = processes[shortest].turnaroundTime - processes[shortest].burstTime;

            if (processes[shortest].waitingTime < 0)
                processes[shortest].waitingTime = 0;
        }
        currentTime++;
    }
}

void printGanttChart(struct Process processes[], int n) {
    printf("\nGantt Chart:\n");

    for (int i = 0; i < n; i++) {
        printf("|  P%d  ", processes[i].pid);
    }
    printf("|\n");

    for (int i = 0; i < n; i++) {
        printf("%d    ", processes[i].completionTime);
    }
    printf("\n");
}

void printTable(struct Process processes[], int n) {
    printf("\nPID\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n");

    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].pid, processes[i].arrivalTime,
               processes[i].burstTime, processes[i].completionTime,
               processes[i].waitingTime, processes[i].turnaroundTime);
    }
}

int main() {
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter arrival time and burst time for process P%d: ", i + 1);
        processes[i].pid = i + 1;
        scanf("%d%d", &processes[i].arrivalTime, &processes[i].burstTime);
        processes[i].remainingTime = processes[i].burstTime;
    }

    calculateTimes(processes, n);
    printTable(processes, n);
    printGanttChart(processes, n);

    return 0;
}