#include<iostream>
using namespace std;
class boss
{
    protected:
    string a;
    string b;
    string c;
    public:
    boss(){}
    boss(string x,string y,string z) : a(x),b(y),c(z){
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
        cout<<"c:"<<c<<endl;
    }
};
class employee:public boss{
    int d;
    int e;
    public:
    employee(){}
    employee(string x,string y,string z,int w,int t):boss(x,y,z),d(w),e(t){
        int sum=w+e;
        cout<<"Sum :"<<sum<<endl;
    }
};
int main(){
    employee em1("BossA","BossB","BossC",10,20);
}