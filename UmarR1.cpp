#include<iostream>
#include<queue>
#include<iomanip>
using namespace std;

class process{
    //process number, burst time, arrival time, completion time, waiting time, burst time left, turn around time
    int pno,bt,at=0,ct,wt,btLeft,tat; 
    static int pcounter;
public:
    process(){
        cout<<"Enter process No."<<++pcounter<<"'s details below\n";
        pno=pcounter;
        cout<<"Arrival Time: ";cin>>at;
        cout<<"Burst time: ";cin>>bt;
        cout<<endl;
        btLeft=bt;
    }
    friend void roundRobin(process arr[],int q,int n);
};

int process::pcounter;

deque<process*>processQ;
deque<process*>readyQ;

void roundRobin(process arr[],int quantum,int n){
    int q=0; 
    bool complete = false; 

    for(int i=0;i<n;i++) 
        processQ.push_back(&arr[i]);

    for(int time=0;!complete;time++){
        for(auto i: processQ) 
            if(i->at==time) 
                readyQ.push_back(i);

        if(!readyQ.empty()){
            process* frontProcess = readyQ.front();
            if(frontProcess->btLeft > 0) {
                frontProcess->btLeft--;
                q++;
            }
        }

        if((q == quantum || !readyQ.empty() && readyQ.front()->btLeft == 0)){
            q = 0; 
            process* frontProcess = readyQ.front();
            readyQ.pop_front();

            if(frontProcess->btLeft > 0) 
                readyQ.push_back(frontProcess);
           
            else if(frontProcess->btLeft == 0){
                frontProcess->ct = time + 1;
                frontProcess->tat = frontProcess->ct - frontProcess->at;
                frontProcess->wt = frontProcess->tat - frontProcess->bt;
            }
        }

        complete = true;
        for(auto i: processQ){
            if(i->btLeft != 0) {
                complete = false;
                break;
            }
        }
    }

    cout << setw(20) << "Process No." << setw(20) << "Arrival Time" << setw(20) << "Burst Time" << setw(20) << "Completion Time"<< setw(20) << "Turnaround Time" << setw(20) << "Waiting Time" << endl;
    cout << setfill('-') << setw(125) << "-" << setfill(' ') << endl;

    for (auto i : processQ) {
        cout << setw(20) << i->pno << setw(20) << i->at << setw(20) << i->bt << setw(20) << i->ct << setw(20) << i->tat << setw(20) << i->wt << endl;
        cout << setfill('-') << setw(125) << "-" << setfill(' ') << endl;
    }

    for (auto i : processQ) {
        delete i;
    }

    double avgtat = 0, avgwt = 0;
    for(auto i: processQ){
        avgtat += i->tat;
        avgwt += i->wt;
    }
    avgtat /= n;
    avgwt /= n;

    cout << "\nAverage Turn Around time: " << setprecision(4) << avgtat << " ms" << endl;
    cout << "Average Waiting Time: " << setprecision(4) << avgwt << " ms" << endl;
}

int main(){
    int num,quantum;
    cout<<"Enter number of processes: ";cin>>num;
    cout<<"Enter quantum time: ";cin>>quantum;

    if (num <= 0 || quantum <= 0) {
        cout << "Number of processes and quantum time must be positive integers." << endl;
        return 0;
    }

    process arr[num];
    roundRobin(arr,quantum,num);
}
