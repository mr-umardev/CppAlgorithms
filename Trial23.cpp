#include<iostream>
using namespace std;
class Lamborgini;
class RollsRoyce{
    string Modelname;
    int year;
    int price;
    int mileage;
    public:
    void getdata(){
        cout<<"Enter Model Name:"<<endl;
        cin>>Modelname;
        cout<<"Enter year:"<<endl;
        cin>>year;
        cout<<"Enter price:"<<endl;
        cin>>price;
        cout<<"Enter mileage:"<<endl;
        cin>>mileage;
    }
    void putdata(){
        cout<<"Model Name is:"<<Modelname<<endl;
        cout<<"Year is:"<<year<<endl;
        cout<<"Price is:"<<price<<endl;
        cout<<"Mileage is:"<<mileage<<endl;
    }
    friend void compare(RollsRoyce r1,Lamborgini l1);
};
class Lamborgini{
    string Modelname;
    int year;
    int price;
    int mileage;
    public:
    void getdata(){
        cout<<"Enter Model Name:"<<endl;
        cin>>Modelname;
        cout<<"Enter year:"<<endl;
        cin>>year;
        cout<<"Enter price:"<<endl;
        cin>>price;
        cout<<"Enter mileage:"<<endl;
        cin>>mileage;
    }
    void putdata(){
        cout<<"Model Name is:"<<Modelname<<endl;
        cout<<"Year is:"<<year<<endl;
        cout<<"Price is:"<<price<<endl;
        cout<<"Mileage is:"<<mileage<<endl;
    }
    friend void compare(RollsRoyce r1,Lamborgini l1);
};
void compare(RollsRoyce r1,Lamborgini l1){
    if(r1.price>l1.price){
        cout<<"RollsRoyce price is higher"<<endl;
    }
    else{
        cout<<"Lamborghini price is higher"<<endl;
    }
    if(r1.mileage>l1.mileage){
        cout<<"RollsRoyce is higher"<<endl;
    }
    else{
        cout<<"Lamborghini is higher"<<endl;
    }
}
int main(){
    RollsRoyce R1;
    Lamborgini L1;
    R1.getdata();
    R1.putdata();
    L1.getdata();
    L1.putdata();
    compare(R1,L1);
    return 0;
}