#include<iostream>
using namespace std;
class BC{
    public:
    int b;
    void show()
    {
        cout<<"b="<<b<<endl;
    }
};
class DC:public BC{
    public:
    int d;
    void show(){
        cout<<"b="<<b<<endl<<"d="<<d<<endl;
    }
};
int main(){
    BC *bptr;
    BC base;
    bptr=&base;
    bptr->b=100;
    bptr->show();
    DC derived;
    bptr=&derived;
    bptr->b=200;
    //bptr->d=150;
    DC *dptr;
    dptr=&derived;
    dptr->d=300;
    dptr->show();
    ((DC *)bptr)->d=400;
    ((DC*)bptr)->show();
    return 0;
}