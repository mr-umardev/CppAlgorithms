/*Polymorphism: Develop a C++ program to create a class called COMPLEX with the following overloading functions ADD that return a COMPLEX number.
i. ADD (a, s2) – where a is an integer (real part) and s2 is a complex number.
ii. ADD (s1, s2) – where s1 and s2 are complex numbers.
*/

#include<bits/stdc++.h>
using namespace std;

class cp{
    int r,i;
    public:
    void setData();
    friend void printer(cp c1);
    friend cp add(int a, cp c1);
    friend cp add(cp c1, cp c2);
};

void cp::setData(){
    cout<<"Enter the real part: ";
    cin>>r;
    cout<<"Enter the imaginary part: ";
    cin>>i;
    cout<<"Your complex number is "<<r<<" + "<<i<<"i\n"<<endl;
}

void printer(cp c1){
    cout<<"Result ="<<c1.r<<" + "<<c1.i<<"i"<<endl;
}

cp add(int a, cp c1){
    cp c3;
    c3.r=a+c1.r;
    c3.i=c1.i;
    return c3;
}
cp add(cp c1, cp c2){
    cp c3;
    c3.r=c2.r+c1.r;
    c3.i=c1.i+c2.i;
    return c3;
}


int main(){
    int a;
    cp cp1,cp2,cp3,cp4;
    cp1.setData();
    cp2.setData();
    cout<<"Enter an integer\n";
    cin>>a;
    cp3=add(a,cp1);
    printer(cp3);
    cp4=add(cp1,cp2);
    printer(cp4);
    return 0;
}
