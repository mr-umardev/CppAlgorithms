#include<iostream>
using namespace std;

class employee
{
    int emp_id;
    string emp_name;
    int basic;
    int it;
    int net_salary=0;
    int DA;
public:
    employee()
    {
        DA=52%basic;
        cout<<"Dear allowance is :"<<DA<<endl;
    }
};
int main()
{
     int emp_id;
    string emp_name;
    int basic;
    int it;
    int net_salary=0;
    int DA;
    int n=0;
    cout<<"Enter no of employees:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter employee id:"<<endl;
        cin>>emp_id;
        cout<<"Enter employee name:"<<endl;
        cin>>emp_name;
        cout<<"Enter Basic Salary;"<<endl;
        cin>>basic;
    }
    employee emp1;
    e
}
