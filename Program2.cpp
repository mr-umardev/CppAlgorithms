#include <iostream>
using namespace std;
class student
{
int marks[3][6],avg[6];
public:
string usn;
void getdata();
void calculate();
void display();
};
void student::getdata()
{
cout<<"Enter the usn of the student:";
cin>>usn;
for(int j=0;j<3;j++)
{
cout<<"Enter the marks for test "<<j+1<<endl;
for(int i=0;i<6;i++)
{
cout<<"Enter the marks of student in course "<<i+1<<":";
cin>>marks[j][i];
}
}
}
void student::calculate()
{
for(int i=0;i<6;i++)
{
int large=0,small=100000,large2,total=0;
for(int j=0;j<3;j++)
{
if(marks[j][i]>large)
large=marks[j][i];
if(marks[j][i]<small)
small=marks[j][i];
total=total+marks[j][i];
}
large2=total-large-small;
avg[i]=(large+large2)/2;
}

}
void student::display()
{
for(int i=0;i<6;i++)
{
cout<<"Average in course"<<i+1<<":"<<avg[i]<<endl;
}
}
int main()
{
int n;
cout<<"Enter the number of students:";
cin>>n;
student s[n];
for(int i=0;i<n;i++)
{
s[i].getdata();
s[i].calculate();
}
for(int i=0;i<n;i++)
{
cout<<"USN:"<<s[i].usn<<endl;
s[i].display();
}
return 0;
}