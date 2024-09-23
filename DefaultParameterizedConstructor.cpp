#include<iostream>
using namespace std;
 class student
 {
    private:
    string name;
    int rollno;
    public:
    int addition(int a,int b);
    student()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter rollno:"<<endl;
        cin>>rollno;
    }
    void display()
    {
        cout<<"Name 1:"<<name<<endl;
        cout<<"Roll No 1:"<<rollno<<endl;
    }
 };
 int student::addition(int a,int b)
 {
    int sum=a+b;
    cout<<sum<<endl;

 }

 int main()
 {
    student s1;
    s1.display();
    s1.addition(4,7);
 }