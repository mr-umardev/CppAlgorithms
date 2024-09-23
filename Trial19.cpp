#include<iostream>
using namespace std;
class trial{
    float *ptr;
    public:
    void getdata(){
        ptr=new float;
        *ptr=10;
        cout<<*ptr<<endl;
    }
    void putdata(){
        delete ptr;
        cout<<"delete :"<<ptr<<endl;
    }
};
int main(){
    trial t1;
    t1.getdata();
    t1.putdata();
}

