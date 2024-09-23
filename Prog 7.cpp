#include<iostream>
using namespace std;

class PersonData
{
    protected:
    string lastname;
    string firstname;
    string address;
    string city;
    string state;
    int phone;
    PersonData(){
        cout<<"First Name :";cin>>firstname;
        cout<<"Last Name :";cin>>lastname;
        cout<<"Address :";cin>>address;
        cout<<"City :";cin>>city;
        cout<<"State :";cin>>state;
        cout<<"Phone :";cin>>phone;
    }
    PersonData(string x,string y,string z,string w,string u,int ph):lastname(x),firstname(y),address(z),city(w),state(u),phone(ph){}
    void display(){
        cout<<"First Name :"<<firstname<<endl;
        cout<<"Last Name :"<<lastname<<endl;
        cout<<"Address :"<<address<<endl;
        cout<<"City :"<<city<<endl;
        cout<<"State :"<<state<<endl;
        cout<<"Phone :"<<phone<<endl;
    }
};
class CustomerData:public PersonData{
    public:
    int customer_Number;
    string email_id;
    CustomerData(){
        cout<<"Customer Number :";cin>>customer_Number;
        cout<<"Email Id :";cin>>email_id;
    }
    CustomerData(string x,string y,string z,string w,string u,int ph,int v,string o):PersonData(x,y,z,w,u,ph),customer_Number(v),email_id(o){}

    void display()
    {
        PersonData::display();
        cout<<"Customer Name :"<<customer_Number<<endl;
        cout<<"Email:"<<email_id<<endl;
    }
};
int main(){
    CustomerData Cd1;
    Cd1.display();

}