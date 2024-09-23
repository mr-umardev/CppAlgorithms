//2. Write a C++ program to calculate the percentage of a student using multi-level inheritance. Accept the marks of three subjects in base class. A class will derive from the above mentioned class which includes a function to find the total marks obtained and another class derived from this class which calculates and displays the percentage of students.
#include<iostream>
using namespace std;

class marks{
    int m1,m2,m3;
    protected:
    marks(){}
    marks(int x,int y,int z):m1(x),m2(y),m3(z){}
};

class totalMarks:public marks{
    int total;
    protected:
    totalMarks(){}
    totalMarks(int x,int y,int z):marks(x,y,z){total=x+y+z;}
    int getTotal(){return total;}
};

class percentage:public totalMarks{
    double per;
    public:
    percentage(){}
    percentage(int x,int y,int z):totalMarks(x,y,z){per=double(getTotal())/3;}
    void display(){cout<<"Student has scored "<<per<<"%\n";}
};

int main(){
    int a,b,c;
    cout<<"Marks1: ";cin>>a;
    cout<<"Marks2: ";cin>>b;
    cout<<"Marks3: ";cin>>c;
    percentage hey(a,b,c);
    hey.display();
}