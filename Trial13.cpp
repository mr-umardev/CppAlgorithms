#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;
    string address;
    int phone_no;
    Person(){};
    Person(string a,string b,int c):name(a),address(b),phone_no(c){

    }
};
class Employee:public Person{
    public:
    int eno;
    string ename;
    Employee(){};
    Employee(int a,string b):eno(a),ename(b){

    }
};
class Manager:public Employee{
    public:
    string designation;
    string department_name;
    int basic_salary;
    Manager(){};
    Manager(string a,string b,int c,int d,string e,string f,string g,int h):Employee(d,e),designation(a),department_name(b),basic_salary(c){

    }
    void display()
    {
        
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"phone no:"<<phone_no<<endl;
        cout<<"employee no:"<<eno<<endl;
        cout<<"employee name:"<<ename<<endl;
        cout<<"designation:"<<designation<<endl;
        cout<<"department name:"<<department_name<<endl;
        cout<<"basic salary:"<<basic_salary<<endl;
        
    }
};
int main()
{
    Manager M1;
    string a,b,e,f,g;
    int c,n,d,h;
        cout<<"Enter no of employees :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Name:";
        cin>>a;
        cout<<"Address:";
        cin>>b;
        cout<<"phone no:";
        cin>>c;
        cout<<"employee no:";
        cin>>d;
        cout<<"employee name:";
        cin>>e;
        cout<<"designation:";
        cin>>f;
        cout<<"department name:";
        cin>>g;
        cout<<"basic salary:";
        cin>>h;
        M1=Manager(a,b,c,d,e,f,g,h);
    M1.display();
        
    }
    
    
}