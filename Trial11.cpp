#include<bits/stdc++.h>
using namespace std;

class A
{
    protected:
    int x , y,sum=0;
    public:
    A(){};
    A(int a,int b):x(a),y(b)
    {
        sum=a+b;
    }
};
    class B: public A
    {
        public:
        B(){};
        B(int a,int b):A(a,b){};
        void display(){
        cout<<"First:"<<x<<endl;
        cout<<"Second:"<<y<<endl;
        cout<<"Sum:"<<sum;
        }

    };
int main()
{
    int a,b;
    B b1;
    cout<<"Enter first value:";
        cin>>a;
        cout<<"Enter second value:"<<endl;
        cin>>b;

    b1=B(a,b);
    b1.display();
}