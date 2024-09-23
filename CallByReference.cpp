#include<iostream>
using namespace std;

void getdata(int *ptra, int *ptrb)
{
    if(*ptra>*ptrb)
    {
        cout<<*ptra<<endl;
    }
    else
    {
        cout<<*ptrb<<endl;
    }
}
int main()
{
    int x=10,y=20;
    getdata(&x,&y);
}
