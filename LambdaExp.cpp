#include<bits/stdc++.h>
using namespace std;
class demo{
    vector<int>s;
    int element,n;
    public:
    demo(){
        cout<<"Enter no of elements:";
        cin>>n;
        cout<<"Enter vector elements:"<<endl;
        for(int i=0;i<n;i++){
            cin>>element;
            s.push_back(element);
        }
    }
        void sorting(){
            sort(s.begin(),s.end(),greater<int>());
           
        }
        void reversing(){
            int size;
            vector<int>d={10,20,30,40,50,60,70,80,90,100};
             reverse(d.begin(),d.end());
             size=d.size();
             cout<<"Vector after reversing:"<<endl;
            for(auto i=0;i<size;i++){
                cout<<d[i]<<" ";
            }
            cout<<endl;
            cout<<"Max element is:"<<*max_element(d.begin(),d.end())<<endl;
            cout<<"Max element is:"<<*min_element(d.begin(),d.end())<<endl;
            cout<<"Sum of two vectors is:"<<accumulate(s.begin(),s.end(),0)+accumulate(d.begin(),d.end(),0)<<endl;
        }
        ~demo(){
            cout<<"Vector after sorting:"<<endl;
            for(auto i=0;i<n;i++){
                cout<<s[i]<<" ";
            }
    }
};
int main(){
    demo d1;
    d1.sorting();
    d1.reversing();
}