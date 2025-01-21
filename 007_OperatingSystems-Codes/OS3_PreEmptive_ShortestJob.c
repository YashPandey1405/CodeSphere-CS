#include <stdio.h>
#include <limits.h> // For INT_MAX

struct Process {
    int pid, arrivalTime, burstTime;
    int remainingTime, completionTime;
    int waitingTime, turnaroundTime;
};

void calculateTimes(struct Process processes[], int n) {
    int complete = 0, currentTime = 0, minTime = INT_MAX;
    int shortest = -1, finishTime;
    int check = 0;

    while (complete != n) {
        // Find the process with the shortest remaining time that has arrived
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

        // Reduce remaining time of the selected process
        processes[shortest].remainingTime--;
        minTime = processes[shortest].remainingTime;

        // If a process gets completely executed
        if (processes[shortest].remainingTime == 0) {
            complete++;
            check = 0;
            minTime = INT_MAX;

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
        printf("|\tP%d\t", processes[i].pid);
    }
    printf("|\n");

    for (int i = 0; i < n; i++) {
        printf("\t%d\t", processes[i].completionTime);
    }
    printf("\n");
}

void printTable(struct Process processes[], int n) {
    printf("\nPID\t\tAT\t\tBT\t\tCT\t\tWT\t\tTT\n");
    int count1=0,count2=0;
    for (int i = 0; i < n; i++) {
        printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].pid, processes[i].arrivalTime,
               processes[i].burstTime, processes[i].completionTime,
               processes[i].waitingTime, processes[i].turnaroundTime);
        count1 += processes[i].turnaroundTime;
        count2 += processes[i].waitingTime;
    }
    printf("\n");
    printf("Total Waiting Time Is : %d \n",(count2));
    printf("Average Waiting Time Is : %f \n",(count2/(float)n));
    printf("Total TurnAround Time Is : %d \n",(count1));
    printf("Average TurnAround Time Is : %f \n",(count1/(float)n));
    printf("\n");
}

int main() {
    int n;
    printf("Yash Pandey \t 12214802722 \n");
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("\n");
    struct Process processes[n];

    for (int i = 0; i < n; i++) {
        printf("Enter arrival time and burst time for process P%d: ", i + 1);
        processes[i].pid = i + 1;
        scanf("%d%d", &processes[i].arrivalTime, &processes[i].burstTime);
        processes[i].remainingTime = processes[i].burstTime;
    }

    calculateTimes(processes, n);
    printTable(processes, n);
    printGanttChart(processes, n);

    return 0;
}
