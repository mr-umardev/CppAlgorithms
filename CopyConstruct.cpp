#include<iostream>
using namespace std;
class fantastic{
    private:
    int mul;
    public:
    fantastic(){
        cout<<"Hello"<<endl;
    }
    fantastic(int x,int y){
        mul=x*y;
    }
    void display(){
        cout<<"mul:"<<mul<<endl;
    }
};
int main(){
    fantastic f1(12,11);
    f1.display();
    fantastic f2=f1;
    
}