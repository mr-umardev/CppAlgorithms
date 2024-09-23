#include<iostream>
using namespace std;
class Student{
    int marks[6][3],avg[6],usn;
    public:
    void getdata();
    void calculate();
    void display();
};
void Student::getdata(){
    cout<<"Enter usn:"<<endl;
    cin>>usn;
    for(int i=0;i<6;i++){
    for(int j=0;j<3;j++){
    cout<<"Enter marks:"<<endl;
    cin>>marks[i][j];

}
}
}
void Student::calculate(){
    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            avg[j]=((marks[i][j]+marks[i][j]+marks[i][j])/3);
        }
    }
    cout<<"Average of "<<avg<<endl;
}

int main(){
    int n;
    cout<<"Enter no of students:"<<endl;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        s[i].getdata();
        s[i].calculate();
        s[i].display();
    }
    return 0;
}