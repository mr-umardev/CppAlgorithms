#include<iostream>
using namespace std;

class boss{
    int *jkh;
    public:
    boss(){
        jkh=new int;
        *jkh=10;
}
void display(){
    cout<<"jkh is:"<<*jkh<<endl;
}
~boss(){
    delete jkh;
    cout<<"jkh1 is:"<<*jkh<<endl;
}
};
int main()
{
    boss b1;
    b1.display();
}