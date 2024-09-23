#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    int x,y,z;
    public:
    A(){};
    A(int a,int b,int c):x(a),y(b),z(c)
    {
        
    }
};
class B:public A{
    public:
    int sum=0;
    B(){};
    B(int a,int b,int c):A(a,b,c){
        sum=a+b+c;

    }
};
class C:public B{
    public:
    int Average=0;
    C(){};
    C(int a,int b,int c):B(a,b,c){
        Average=sum/3;
    }
    void display()
    {
        cout<<"Average:"<<Average<<endl;
    }
};
int main()
{
    C c1;
    int a,b,c;
    cout<<"Enter marks for first subject:"<<endl;
    cin>>a;
    cout<<"Enter Marks for second subject:"<<endl;
    cin>>b;
    cout<<"Enter marks for third subject:"<<endl;
    cin>>c;
    c1=C(a,b,c);
    c1.display();
}