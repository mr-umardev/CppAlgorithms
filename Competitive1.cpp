//Create a class of the following specifications
//i)An instance variable named to hold a student exam's score
//ii)A void input() function that reads integers & saves them 
//iii)An integer calculate Totalscore() function that return's the sum of the student scores
//Create a class name student repsenting data above.Create getter & setter functions for each element i.e the class should have atleast \
//getfirstname setfirstname & getclassname setclassname ,setage & getage functions.
#include<bits/stdc++.h>
using namespace std;
class Student{
    string firstname,secondname;
    int age,element,sum=0,size;
    vector<int>s;
    public:
    Student(){
        cout<<"Enter First Name:";cin>>firstname;
        cout<<"Enter Second Name:";cin>>secondname;
        cout<<"Age is:";cin>>age;
        cout<<"Enter student marks:";for(auto i=0;i<3;i++){cin>>element;
        s.push_back(element);
        size=s.size();
        }
    }
    int TotalMarks(){
        for(auto i=0;i<size;i++){ sum=sum+s[i];}
        return sum;cout<<endl;
    }
    void Ascending(){
        sort(s.begin(),s.end());
            cout<<"Final Student Details"<<endl;
            for(auto i=0;i<size;i++){
                cout<<s[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){int n;cout<<"Enter no of students:"<<endl;cin>>n;
Student s1[n];
cout<<"Marks is"<<endl;for(auto i=0;i<n;i++){cout<<s1[i].TotalMarks();}
 cout << "Final Student Details" << endl;
    for (auto i = 0; i < n; i++) {
        cout << "Scores in ascending order for student " << i + 1 << ": ";
        s1[i].Ascending();
    }
return 0;}