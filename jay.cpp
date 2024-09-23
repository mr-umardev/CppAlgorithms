#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    int n1,n2,div,n3;
    try{
        cout<<"Enter first value to multiply:"<<endl;
        cin>>n1;
        cout<<"Enter second value to multiply:"<<endl;
        cin>>n2;
        cout<<"Enter a value:"<<endl;
        cin>>n3;

        if(n1==0 || n2==0){
            throw runtime_error("Cannot multiply value by 0");
        }
        div=n1*n2;
        cout<<"Result is:"<<div;
    }
    catch(const exception& e){
        cerr<<e.what()<<endl;
    }
    return 0;
}