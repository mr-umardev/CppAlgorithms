#include<iostream>
using namespace std;
class boss{
    int a,b,c;
    public:
    boss(){}
    boss(int x,int y):a(x),b(y){
        int sum=a+b;
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
        cout<<"sum is:"<<sum<<endl;
    }
    int add(int z,int w){
        a=z;
        b=w;
        int sum=a+b;
        cout<<"z:"<<a<<endl;
        cout<<"w:"<<b<<endl;
        cout<<"sum is:"<<sum<<endl;

    }
    int add(int z,int w,int v){
        a=z,b=w,c=v;
        int subtract=(a-(b-c));
        cout<<"sub is:"<<subtract<<endl;
    }

};
int main(){
    boss b1(20,96);
    boss b2(30,45);
    b1.add(100,96);
    b2.add(120,98);
    b1.add(50,20,10);
    b2.add(60,30,10);
    boss b3=b2;
    b3.add(100,50,10);
    return 0;
}