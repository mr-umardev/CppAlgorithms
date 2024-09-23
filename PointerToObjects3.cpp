#include<iostream>
#include<string.h>
using namespace std;
class person{
    char name[20];
    float age;
    public:
    person(char s[30],float a){  //constructor setting name & age
        strcpy(name,s);
        age=a;
    }
    person &greater(person &x);
    };
    person &person::greater(person &x) //
    {
        if(x.age>=age){
            return x;
        }
        else{
            return *this;
        }
    }
        void display(){

        }

int main(){
    person P1("Joseph",37.5);
    person P2("a",41.0);
    person P3("h",43.2);
    person P=P1.greater(P3); //dummy object for displaying & invoking the object
    cout<<"Elder person is:"<<endl;
    //P.display();
    P=P1.greater(P2);
    cout<<"Elder person is:"<<endl;
    //P.display();
}
//this->a=s //means it refers to invoking objects