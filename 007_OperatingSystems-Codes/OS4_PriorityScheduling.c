#include <stdio.h>
#include <limits.h> // For INT_MAX

struct Process {
    int pid, arrivalTime, burstTime, priority;
    int remainingTime, completionTime;
    int waitingTime, turnaroundTime;
};

void calculateTimes(struct Process processes[], int n) {
    int complete = 0, currentTime = 0, minPriority = INT_MAX;
    int highestPriority = -1, finishTime;
    int check = 0;

    while (complete != n) {
        // Find the process with the highest priority (lowest number) that has arrived
        for (int i = 0; i < n; i++) {
            if ((processes[i].arrivalTime <= currentTime) && 
                (processes[i].priority < minPriority) && 
                processes[i].remainingTime > 0) {
                minPriority = processes[i].priority;
                highestPriority = i;
                check = 1;
            }
        }

        if (check == 0) {
            currentTime++;
            continue;
        }

        // Reduce remaining time of the selected process
        processes[highestPriority].remainingTime--;
        minPriority = processes[highestPriority].priority;

        // If a process gets completely executed
        if (processes[highestPriority].remainingTime == 0) {
            complete++;
            check = 0;
            minPriority = INT_MAX;

            finishTime = currentTime + 1;
            processes[highestPriority].completionTime = finishTime;
            processes[highestPriority].turnaroundTime = finishTime - processes[highestPriority].arrivalTime;
            processes[highestPriority].waitingTime = processes[highestPriority].turnaroundTime - processes[highestPriority].burstTime;

            if (processes[highestPriority].waitingTime < 0)
                processes[highestPriority].waitingTime = 0;
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
    printf("\nPID\tAT\tBT\tPT\tCT\tWT\tTT\n");
    int totalTurnaroundTime = 0, totalWaitingTime = 0;
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n", processes[i].pid, processes[i].arrivalTime,
               processes[i].burstTime, processes[i].priority, processes[i].completionTime,
               processes[i].waitingTime, processes[i].turnaroundTime);
        totalTurnaroundTime += processes[i].turnaroundTime;
        totalWaitingTime += processes[i].waitingTime;
    }
    printf("\n");
    printf("Total Waiting Time: %d\n", totalWaitingTime);
    printf("Average Waiting Time: %.2f\n", (float)totalWaitingTime / n);
    printf("Total Turnaround Time: %d\n", totalTurnaroundTime);
    printf("Average Turnaround Time: %.2f\n", (float)totalTurnaroundTime / n);
    printf("\n");
}

int main() {
    int n;
    printf("\n(mait@fedora-]$ vi yash.c \n[mait@fedora]$ gcc yash.c \n[mait@fedora-]$ ./a.out \n\n");
    printf("Yash Pandey \t 12214802722\n");
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("\n");
    struct Process processes[n];

    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;
        printf("Enter arrival time, burst time, and priority for process P%d: ", processes[i].pid);
        scanf("%d%d%d", &processes[i].arrivalTime, &processes[i].burstTime, &processes[i].priority);
        processes[i].remainingTime = processes[i].burstTime;
    }

    calculateTimes(processes, n);
    printTable(processes, n);
    printGanttChart(processes, n);
    printf("\n(mait@fedora-]$");

    return 0;
}
