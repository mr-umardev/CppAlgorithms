#include <iostream>
#include <deque>
#include <iomanip>
using namespace std;

class process {
    int pno, bt, at = 0, ct, wt, btLeft, tat;
    static int pcounter;

public:
    process() {
        cout << "Enter process No." << ++pcounter << "'s details below\n";
        pno = pcounter;
        cout << "Arrival Time: ";
        cin >> at;
        cout << "Burst time: ";
        cin >> bt;
        cout << endl;
        btLeft = bt;
    }

    int getProcessNumber() const {
        return pno;
    }

    int getCompletionTime() const {
        return ct;
    }

    friend void roundRobin(process arr[], int q, int n);
};

int process::pcounter;

deque<process *> processQ;
deque<process *> readyQ;

void printGanttChart(int time, process *currentProcess) {
    static int prevTime = 0;
    if (time > prevTime) {
        if (currentProcess == nullptr) {
            cout << " | " << setw(time - prevTime) << "" << "IDLE ";
        } else {
            cout << " | " << setw(time - prevTime) << "" << "P" << currentProcess->getProcessNumber() << "(" << currentProcess->getCompletionTime() << ")";
        }
        prevTime = time;
    }
}

void roundRobin(process arr[], int quantum, int n) {
    int q = 0;
    bool complete = false;
    bool isExecuting = false;
    deque<pair<int, process *>> ganttChart; // to store Gantt chart intervals

    for (int i = 0; i < n; i++)
        processQ.push_back(&arr[i]);

    for (auto i : processQ)
        if (i->at == 0)
            readyQ.push_back(i);

    int prevTime = 0; // Initialize prevTime

    for (int time = 1; !complete; time++) {
        q++;

        if (!isExecuting && readyQ.empty()) {
            // If no process is executing and ready queue is empty, consider it as idle time
            ganttChart.push_back({time, nullptr});
            continue;
        }

        if (!isExecuting && !readyQ.empty()) {
            // If no process is executing but ready queue is not empty, start executing a new process
            process *frontProcess = readyQ.front();
            frontProcess->btLeft--;
            isExecuting = true;
            ganttChart.push_back({time, frontProcess});
        }

        for (auto i : processQ)
            if (i->at == time)
                readyQ.push_back(i);

        if (!readyQ.empty()) {
            process *frontProcess = readyQ.front();
            frontProcess->btLeft--;

            if (frontProcess->btLeft == 0) {
                frontProcess->ct = time;
                frontProcess->tat = frontProcess->ct - frontProcess->at;
                frontProcess->wt = frontProcess->tat - frontProcess->bt;
                isExecuting = false;
                readyQ.pop_front();
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (processQ[i]->btLeft != 0)
                break;
            else
                count++;
        }
        if (count == n)
            complete = true;
    }

    cout << " |" << endl; // Complete the Gantt chart line

    // Display Gantt chart
    cout << "Gantt Chart: ";
    for (auto interval : ganttChart) {
        printGanttChart(interval.first, interval.second);
    }
    cout << " |" << endl;

    double avgtat = 0, avgwt = 0;
    for (auto i : processQ) {
        avgtat += i->tat;
        avgwt += i->wt;
    }
    avgtat /= n;
    avgwt /= n;

    cout << "\nAverage Turn Around time: " << setprecision(4) << avgtat << " ms" << endl;
    cout << "Average Waiting Time: " << setprecision(4) << avgwt << " ms" << endl;
}

int main() {
    int num, quantum;
    cout << "Enter number of processes: ";
    cin >> num;
    cout << "Enter quantum time: ";
    cin >> quantum;
    process arr[num];
    roundRobin(arr, quantum, num);

    return 0;
}
