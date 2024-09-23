#include<iostream>
using namespace std;

class Trial1
{
    int a=0,b=0;
    public:
    void CallByReference(int *ptra,int *ptrb)
    {
        
        this->a=*ptra;
        this->b=*ptrb;
        
    }
    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main()
{
    Trial1 T1;
    int x=34,y=56;
    T1.CallByReference(&x,&y);
    T1.display();
}