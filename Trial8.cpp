#include<iostream>
using namespace std;

int getdata(int a,int b)
{
    if(a>b)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<b<<endl;
    }
}
int main()
{
    int a=30,b=20;
    int g=getdata(a,b);
}
