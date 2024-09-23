#include<iostream>
using namespace std;
class vehicle{
    string name;
    int regno;
    static int count;
    public:
    vehicle(){
        ++count;
    }
    void getregno(){
        cout<<"Enter Vehicle Name:"<<endl;
        cin>>name;
        cout<<"Enter Registration Number:"<<endl;
        cin>>regno;
    }
    void putregno(){
        cout<<"Vehicle Name is:"<<name<<endl;
        cout<<"Registration Number is:"<<regno<<endl;
    }
    static void getVehiclecount(){
       cout<<"The count is:"<<count<<endl;
    }
    ~vehicle(){
        --count;
    }
};
int vehicle::count=0;
int main(){
    int n;
    vehicle v1;
    cout<<"Enter no of vehicles:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
    v1.getregno();
    v1.putregno();
    }
    v1.getVehiclecount();
    return 0;
    
}