/*Polymorphism: Develop a C++ program to create a class called COMPLEX with the following overloading functions ADD that return a COMPLEX number.
i. ADD (a, s2) – where a is an integer (real part) and s2 is a complex number.
ii. ADD (s1, s2) – where s1 and s2 are complex numbers.

But now overload + operator and << >> operators rather than overloading functions
*/
#include<iostream>
using namespace std;

class Complex{
    int r,i;
public:
    Complex(){}
    Complex(int x,int y):r(x),i(y){}
    Complex(int x):r(x),i(x){};
    //complex+complex and complex+int
    Complex operator+(const Complex &c1)const{return Complex(r+c1.r,i+c1.i);}
    //int+complex
    friend Complex operator+(const int &lhs,const Complex &rhs){return Complex(lhs+rhs.r,lhs+rhs.i);}
    //insertion operator
    friend ostream&operator<<(ostream &output,const Complex &c1){
        output<<c1.r<<"+"<<c1.i<<"i"<<endl;
        return output;
    }
    //extraction operator
    friend istream&operator>>(istream &input,Complex &c1){
        cout<<"Enter real part\n";
        input>>c1.r;
        cout<<"Enter imaginary part\n";
        input>>c1.i;
        return input;
    }
};

int main(){
    Complex c1,c2,c3,c4,c5,c6;
    c4=Complex(10,15);
    c5=4+c4;
    c6=c4+6;
    cin>>c1;cin>>c2;
    c3=c1+c2;
    cout<<c3;cout<<c5;cout<<c6;
    return 0;
}