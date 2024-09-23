//1. Write a C++ program to add two numbers using single inheritance. Accept these two numbers from the user in base class and display the sum of these two numbers in derived class.
#include<iostream>
using namespace std;


class base{
    protected:
    int a,b;
    int sum;
    base(){}
    base(int x,int y):a(x),b(y){sum=x+y;}
};

class derived:public base{
    public:
    derived(){}
    derived(int x,int y):base(x,y){}
    void display(){cout<<a<<" + "<<b<<" = "<<sum<<endl;}
};

int main(){
    derived pair(1,2),pair2;
    int a,b;
    pair.display();
    cout<<"Enter first number: ";cin>>a;
    cout<<"Enter second number: ";cin>>b;
    pair2=derived(a,b);
    pair2.display();
}