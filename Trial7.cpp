#include<iostream>
#include<stdlib>
using namespace std;

class Hello
{
public:
    Hello()
{
    int *ptr=new int;
    *ptr=5;
    cout<<*ptr<<endl;
    delete ptr;
}
Hello(int q)
{
    cout<<q<<endl;
}
};
int main()
{
    Hello h1;
    Hello h2(10);
}
