#include<iostream>
#include<stdexcept>
using namespace std;
class Exceptions{
    public:
    int n1;
    int n2;
    void compare(){
        try{
            cout<<"Enter first value:"<<endl;
            cin>>n1;
            cout<<"Enter second value:"<<endl;
            cin>>n2;

            if(n1!=n2){
                throw runtime_error("Not equal");
            }
            else{
                cout<<"Equal"<<endl;
            }
        }
        catch(const exception& e){
            cout<<e.what()<<endl;
        }
    }
};
int main(){
    Exceptions exp1;
    exp1.compare();
}