#include<bits/stdc++.h>
using namespace std;
class demo(){
    vector<int>s;
    int n;
    n=sizeof(s)/sizeof(s[0]);
    demo(){
        cout<<"Enter array elements:"<<endl;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(s[j]>s[j+1]){
                    swap((s[j],s[j+1]));
                }
            }
        }
    }
    void display(){
        cout<<"The Final elements are:"<<endl;
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<endl;
        }
    }
};
int main(){
    demo d1;
    d1.display();
}