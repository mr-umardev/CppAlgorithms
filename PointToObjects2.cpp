#include<iostream>
#include<string.h>
using namespace std;
class City{
    protected: char *name;
    int len;
    public:
    City()
    {
        len=0;
        name=new char[len+1];
    }
    void getname(){
        char *s;
        s=new char[30];
        cout<<"Enter city:"<<endl;
        cin>>s;
        len=strlen(s);
        name=new char[len+1];
        strcpy(name,s);

    }
    void printname(){
        cout<<name;
    }
};
int main(){
    City *cptr[10];
    int n=1;
    int option;
    do{
        cptr[n]=new City;
        cptr[n]->getname();
        n++;
    cout<<"Enter 1 to continue or 0 to stop"<<endl;
    cin>>option;
}while(option);
for(int i=0;i<n;i++)
{
    cptr[i]->printname();
}
return 0;
}

