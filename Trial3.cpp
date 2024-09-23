#include<iostream>
using namespace std;

class trial3
{
    int top=-1;
    int arr[100];
public:
    trial3(int x);
    trial3(int y,int z);
};
trial3::trial3(int x)
{
    top=top+1;
    arr[top]=x;

}
trial3::trial3(int y,int z)
{

}
int main()
{

    int m,n,o;
    int arr[100];
    cout<<"Enter no of values in the array :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<"Enter a value in the array :"<<endl;
    cin>>arr[i];
    }
    trial3 t31(n);
    trial3 t32(m,o);

}
