#include<iostream>
using namespace std;

class Student
{
    protected:
    string firstname;
    string lastname;
    int roll_no;
    Student(){
        cout<<"Enter First Name :";cin>>firstname;
        cout<<"Enter Last Name :";cin>>lastname;
        cout<<"Enter Roll No :";cin>>roll_no;
    }
    Student(string x,string y,int z):firstname(x),lastname(y),roll_no(z){}
    void display()
    {
        cout<<"First Name of Student is :"<<firstname;
        cout<<"Last Name of Student is :"<<lastname;
        cout<<"Roll Number of Student is :"<<roll_no;
    }
};
class Test:public Student
{
    public:
    int m1,m2,m3;
    Test(){
        cout<<"Enter Mark 1:";cin>>m1;
        cout<<"Enter Mark 2:";cin>>m2;
        cout<<"Enter Mark 3:";cin>>m3;
    }
    Test(string x,string y,int z,int w,int t,int u):Student(x,y,z),m1(w),m2(t),m3(u){}
    void display()
    {
        cout<<"Mark of subject one is :"<<m1;
        cout<<"Mark of subject two is :"<<m2;
        cout<<"Mark of subject three is :"<<m3;
    }
};
class Sports:public Test
{
    public:
    bool s1;
    int n;
    int points;
    Sports(){
        cout<<"Enter true if student enters any sport :";cin>>s1;
    }
    Sports(string x,string y,int z,int w,int t,int u,bool s,int d,int p):Test(x,y,z,w,t,u),s1(s),n(d),points(p){}

    void check(){
         if(s1==0)
        {
            cout<<"Student Not involved in any sport"<<endl;
        }
        else
        {
            cout<<"Enter the no of sports the student is involved in :";cin>>n;
            if(n==1)
            {
                points=10;
            }
            else{
                for(int i=0;i<n;i++)
                {
                    points=n*10;
                }
            }
        }
    }
};
class Result:public Sports{
    public:
    int final_res;
    int average;
    Result(){}
    Result(string x,string y,int z,int w,int t,int u,bool s,int d,int p,int r,int av):Sports(x,y,z,w,t,u,s,d,p),final_res(r),average(av){}

    void calculate(){
        if(s1!=0)
        {
            final_res=m1+m2+m3+points;
            average=final_res/3;
        }
        else{
            final_res=m1+m2+m3;
            average=final_res/3;
        }
        

    }
    void display()
    {
        cout<<"Final Marks is :"<<final_res<<endl;
        cout<<"Average is :"<<average<<endl;
    }


};
int main()
{
    Result R1;
    R1.check();
    R1.calculate();
    R1.display();
}