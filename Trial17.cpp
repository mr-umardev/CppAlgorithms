#include<iostream>
using namespace std;

class Employee{
    protected:
    int emp_id;
    string emp_name;
    int basic;
    int DA;
    int IT;
    int net_salary;
    public:
    Employee(){}
    Employee(int basic,int IT){
            DA=(0.52*basic);
            net_salary=(basic+(DA-IT));
            cout<<"Net Salary is"<<net_salary<<endl;
    }
};
int main(){
    int n,a,c,d,e,f;
    string b;
    Employee emp1;
    
    
    cout<<"Enter no of employees :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter employee id"<<endl;
        cin>>a;
        cout<<"Enter employee name:"<<endl;
        cin>>b;
        cout<<"Enter basic salary:"<<endl;
        cin>>c;
        cout<<"Enter Income Tax:"<<endl;
        cin>>e;
        Employee emp1(c,e);

    }
    
}


