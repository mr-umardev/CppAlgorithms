#include <iostream>
using namespace std;
class Complex
{
int ar,bc;
public:
void getdata()
{
cout<<"Enter the real part of the complex number: ";
cin>>ar;
cout<<endl<<"Enter the complex part of the complex number: ";
cin>>bc;
}
void print()
{
cout<<"The complex number is "<<ar<<" + "<<bc<<"i"<<endl;
}
void add(int a, Complex s2);
void add(Complex s1,Complex s2);
};
void Complex :: add(int a,Complex s2)
{
cout<<"The complex number is "<<a+s2.ar<<" + "<<s2.bc<<"i where "<<a+s2.ar<<" is the real part and"<<s2.bc<<" is the imaginary part."<<endl;
}
void Complex :: add(Complex s1,Complex s3)
{
cout<<"The complex number is: "<<s1.ar+s3.ar<<" + "<<s1.bc+s3.bc<<"i where "<<s1.ar+s3.ar<<" is the real part and "<<s1.bc+s3.bc<<" is the imaginary part."<<endl;
}
int main() {
Complex c1,c2,c3,c4;
c1.getdata();
c1.print();
c2.add(10,c1);
c2.getdata();
c2.print();
c3.add(c1,c2);
return 0;
}