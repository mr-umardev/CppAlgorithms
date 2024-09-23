#include<iostream>
using namespace std;
class Complex{
    int r,i;
    public:
    void getdata(){
        cout<<"Enter real value :"<<endl;
        cin>>r;
        cout<<"Enter imaginary value:"<<endl;
        cin>>i;
    }
    void putdata(){
        cout<<r<<"+"<<i<<endl;
    }
    friend void add(int a,Complex s2);
    friend void add(Complex s1,Complex s2);
};
void add(int a,Complex s2){
    cout<<"Real part is:"<<a+s2.r<<endl<<"Imaginary part is:"<<s2.i<<endl;
}
void add(Complex s1,Complex s3){
    cout<<"Real part is:"<<s1.r+s3.r<<endl<<"Imaginary part is:"<<s1.i+s3.i<<endl;
}
int main(){
    Complex c1,c2;
    c1.getdata();
    c1.putdata();
    add(12,c1);
    c2.getdata();
    c2.putdata();
    add(c1,c2);

}