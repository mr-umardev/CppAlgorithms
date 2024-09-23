#include<iostream>
using namespace std;

template<typename T1>
T1 add(T1 num1,T1 num2){
    return (num1+num2);
}
T1 sub(T1 num1,T1 num2){
    return(num1-num2);
}
T1 mul(T1 num1,T1 num2){
    return (num1*num2);
}
T1 div(T1 num1,T1 num2){
    return (num1/num2);
}
int main(){
    int res1,res2,res3,res4;
    res1=add<int>(2,3);
    cout<<"result 1"<<endl;
    res2=sub<int>(3,4);
    cout<<"result 2"<<endl;
    res3=mul<int>(4,5);
    cout<<"result 3"<<endl;
    res4=div<int>(6,7);
    cout<<"result 4"<<endl;
}