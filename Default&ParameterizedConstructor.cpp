#include<iostream>
using namespace std;
 class student
 {
    private:
    string name;
    int rollno;
    public:
    student()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter rollno:"<<endl;
        cin>>rollno;
    }
    void display()
    {
        cout<<name;
        cout<<rollno;
    }
 };
 int main()
 {
    student s1;
    s1.display();
 }