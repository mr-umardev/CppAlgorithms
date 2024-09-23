#include<iostream>
using namespace std;
class Trial{
    public:
    int n;
    string name;
    static int counter;
    void sum(int n){
        for(int i=0;i<n;i++){
        cout<<"No of students:"<<++counter<<endl;
    }
    }
   
};
int Trial::counter=0;
int main(){
    Trial T1;
    T1.name="Kumar";
    int n;
    cout<<"Enter no of students:";
    cin>>n;
    T1.sum(n);
    for(int i=0;i<n;i++){
        cout<<"Name:"<<T1.name;
    }
    
    

}