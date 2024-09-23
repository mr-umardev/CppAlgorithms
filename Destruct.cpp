#include<iostream>
using namespace std;
class work
{
    private:
    string company1;
    string company2;
    string company3;
    int a,b,c;
    public:
    work()
    {
        cout<<"Company 1:"<<endl;
        cin>>company1;
        cout<<"Company 2:"<<endl;
        cin>>company2;
        cout<<"Company 3:"<<endl;
        cin>>company3;
        cout<<"a:"<<endl;
        cin>>a;
        cout<<"b:"<<endl;
        cin>>b;
        cout<<"c:"<<endl;
        cin>>c;
    }
    ~work()
    {
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
        cout<<"c:"<<c<<endl;
    }
};
int main()
{
    work w1;
    
}