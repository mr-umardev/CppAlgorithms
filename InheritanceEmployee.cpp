/*3. Write a C++ program to design a base class Person (name, address, phone_no). Derive a class Employee (eno, ename) from Person. Derive a class Manager (designation, department name, basic-salary) from Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/
#include<iostream>
using namespace std;

class person{
    string name,address;
    long ph;
    protected:
    person(){}
    person(string x,string y,long p):name(x),address(y),ph(p){}

};
class employee:public person{
    int eno;
    public:
    employee(){}
    employee(string x,string y,long p,int e):person(x,y,p),eno(e){}

};
class manager:public employee{
    string name,address,desig,dept;
    int bsal,eno;
    long ph;
    public:
    manager(){
        cout<<"Enter the manager's details below\n";
        cout<<"Name: ";cin>>name;
        cout<<"Address: ";cin>>address;
        cout<<"Phone number: ";cin>>ph;
        cout<<"Employee number: ";cin>>eno;
        cout<<"Designation: ";cin>>desig;
        cout<<"Department: ";cin>>dept;
        cout<<"Basic salary: ";cin>>bsal;
        employee(name,address,ph,eno);

    }
    manager(string x,string y,long p,int e,string d,string dp,int b):employee(x,y,p,e),desig(d),dept(dp),bsal(b){}
    friend void highestSalary(manager arr[],int);
};

void highestSalary(manager arr[],int n){
    int max=INT_MIN,maxIndex=-1;
    for(int i=0;i<n;i++){
        if(max<arr[i].bsal){
            max=arr[i].bsal;
            maxIndex=i;
        }
    }
    cout<<"The manager with the highest salary is "<<arr[maxIndex].name<<" and earns whopping "<<arr[maxIndex].bsal<<" USD\n";
}

int main(){
    int num;
    cout<<"Enter number of managers\n";cin>>num;
    manager arr[num];
    highestSalary(arr,num);
}
