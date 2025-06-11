//Pure Virtual Functions
#include<iostream>
using namespace std;
class Balaguruswamy{
    public:
    virtual void example()=0;
};
class C_Programming :public Balaguruswamy{
    public:
    void example(){
        cout<<"C text Book"<<endl;
    }
};
class OOPS:public Balaguruswamy{
    public:
    void example(){
        cout<<"C++ Book"<<endl;
    }
};
int main()
{
    Balaguruswamy* arr[2];
    C_Programming c1;
    OOPS o2;
    arr[0]=&c1;
    arr[1]=&o2;
    arr[0]->example();
    arr[1]->example(); 
}