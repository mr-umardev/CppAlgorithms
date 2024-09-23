#include<iostream>
#include<queue>
#include<iomanip>
#include<map>
#include<limits>
#include<string>
using namespace std;

//PROCESS CLASS
class process{
    //process number, burst time, arrival time, completion time, waiting time, burst time left, turn around time
    int pno,bt,at=0,ct,wt,btLeft,tat; 
    static int pcounter;
    public:
    // Constructor to initialize process details
    process(){
        while(true){
            cout<<"Enter process No."<<++pcounter<<"'s details below\n";
            pno=pcounter;
            cout<<"Arrival Time: ";cin>>at;
            if(at < 0){
                cout<<"\nInvalid Arrival Time. Please enter a non-negative number.\n";
                --pcounter; 
                continue;
            }
            cout<<"Burst time: ";cin>>bt;
            if(bt <= 0) {
                cout<<"\nInvalid Burst Time. Please enter a positive number.\n"; 
                --pcounter; 
                continue;
            }
            cout<<endl;
            btLeft=bt;
            break;
        }
    }
    friend void ganttChart();
    friend void processTable();
    friend void roundRobin(process arr[],int q,int n);
};

int process::pcounter;

//DATA STRUCTURES
//2 queues. 1 for holding all processes and another for the dynamic readyQueue
deque<process*>processQ;
deque<process*>readyQ;
//1 ordered map for the gantt chart
map<pair<int, int>, int>gc;

//CHARTS AND TABLES
//Function to display the process table
void processTable(){
    cout<<endl<<setw(51)<<right<<"PROCESS TABLE\n";
    cout<<"| P No. | Arrival Time | Burst Time | Completion Time | Turn Around Time | Waiting Time |\n";
    for(auto i: processQ){
        //cout<<string(82,'_');
        cout<<"|  "<<setw(3)<<right<<i->pno<<"  |      "<<setw(3)<<right<<i->at<<"     |     "<<setw(3)<<right<<i->bt<<"    |       "<<setw(3)<<right<<i->ct<<"       |       "<<setw(3)<<right<<i->tat<<"        |      "<<setw(3)<<right<<i->wt<<"     |"<<endl;
    }
}

//Function to display Gantt chart
void ganttChart(){
    cout<<"\nGANTT CHART\n";
    //cout<<"| <start time in ms> P No. <end time in ms> |\n";
    cout<<"|";
    //first element till last
    for (auto it = gc.begin(); it != gc.end(); ++it) cout<<" <"<<it->first.first<<"> P"<<it->second<<" <"<<it->first.second<<">"<<" |";
}

//ROUND ROBIN FUNCTION
// Function to implement Round Robin scheduling algorithm
void roundRobin(process arr[],int quantum,int n){
    int q=0; //q iterates from 0 to quantum
    int counter=0;
    bool complete = false; //to end the loop when all processes are finished
    int setStart = 0; //to set starting time for each process (gantt chart)
    bool setBool = 0;
    
    //push all the processes into processQ
    for(int i=0;i<n;i++) processQ.push_back(&arr[i]);

    //DEBUG: processQueue check
    // cout<<"DEBUG: Burst Times\n";
    // for(auto i: processQ) cout<<i->pno<<") "<<i->btLeft<<endl; 
    
    //run a for loop until all process's btleft hits 0
    for(int time=0;!complete;time++){

        //checking if any process has arrived now
        if(counter<n) for(auto i: processQ) if(i->at==time){
            readyQ.push_back(i);
            counter++;
        }

        //decrease burstTime of front process every ms
        //2 cases
        //1) idling hence continue
        //2) process is present and hence reduce btLeft. also record its start time for the gantt chart
        if(readyQ.empty()) continue;
        else{
            process* frontProcess = readyQ.front();
            //record its start time if it is not already recorded
            if(!setBool){
                if(frontProcess->at==time) setStart=time;
                else setStart=time-1;
                setBool=1;
            }
            if(frontProcess->at==time);
            else{
                frontProcess->btLeft--;
                q++;
            }
            //DEBUG: cout<<setStart<<" "<<time<<endl;
        }

        //pop only if q ms has passed or process btLeft hits 0
        if((q==quantum|| readyQ.front()->btLeft==0)){
            q=0; //reset quantum time
            //remove from ready queue to mutate
            process* frontProcess = readyQ.front();
            readyQ.pop_front();

            //Add ((starting,ending time), pno) pair into the ordered map
            gc[{setStart,time}]=frontProcess->pno;
            setBool=0;
            
            //2 cases
            if(frontProcess->btLeft>0) readyQ.push_back(frontProcess);
            //else record the completionTime, calculate the turn around and waiting time. dont push it back
            else if(frontProcess->btLeft==0){
                frontProcess->ct=time;
                frontProcess->tat=frontProcess->ct-frontProcess->at;
                frontProcess->wt=frontProcess->tat-frontProcess->bt;
            }
        }
        //checking if all process's btleft hits 0 or not
        for(int i=0, count=0;i<n;i++){
            if(processQ[i]->btLeft!=0) break;
            else count++;
            if(count==n) complete=true;
        }
    }

    //DEBUG: check everything
    // cout<<"DEBUG: Arrival time\n";
    // for(auto i: processQ) cout<<setw(2)<<i->at<<" ";
    // cout<<"\nDEBUG: Burst time\n";
    // for(auto i: processQ) cout<<setw(2)<<i->bt<<" ";
    // cout<<"\nDEBUG: Completion time\n";
    // for(auto i: processQ) cout<<setw(2)<<i->ct<<" ";
    // cout<<"\nDEBUG: Turn around time\n";
    // for(auto i: processQ) cout<<setw(2)<<i->tat<<" ";
    // cout<<"\nDEBUG: Waiting time\n";
    // for(auto i: processQ) cout<<setw(2)<<i->wt<<" ";
    // cout<<endl;

    //to display process details
    processTable();

    //to display gantt chart
    ganttChart();

    //calculate average turn around time and waiting time
    double avgtat=0,avgwt=0;
    for(auto i: processQ){
        avgtat=avgtat+i->tat;
        avgwt=avgwt+i->wt;
    }
    avgtat=avgtat/n;
    avgwt=avgwt/n;

    cout<<"\n\nAverage Turn Around time: "<<setprecision(4)<<avgtat<<" ms"<<endl;
    cout<<"Average Waiting Time: "<<setprecision(4)<<avgwt<<" ms\n\n";
}

// Function to initialize the Round Robin scheduling algorithm
void initiator(){
    while(true){
        int num, quantum;
        cout << "\nEnter number of processes: ";
        cin >> num;

        // Check if input is valid
        if(cin.fail()){ 
            cout << "Invalid input. Please enter a valid number."<< endl;
            cin.clear(); //Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Discard invalid input
            continue;
        }

        if(num<=0){
            cout<<"Please enter a valid positive integer for the number of processes."<<endl;
            continue;
        }

        cout << "Enter quantum time: ";
        cin >> quantum;

        // Check if input is valid
        if(cin.fail()){ 
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue;
        }

        if(quantum<=0){
            cout<<"Please enter a valid positive integer for the quantum time."<<endl;
            continue;
        }

        cout<<endl;
        process arr[num];
        roundRobin(arr, quantum, num);
        break;
    }
}

int main(){
    initiator();
    return 0;
}