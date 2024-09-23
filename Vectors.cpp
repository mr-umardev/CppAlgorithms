#include<bits/stdc++.h>
using namespace std;
class A{
    int element;
    vector<int>s;
    public:
    A(){
        cout<<"Enter elements of the array:"<<endl;
        for(auto i=0;i<5;i++){
            cin>>element;
            s.push_back(element);
        }
    }
    ~A(){
        cout<<"The array elements are:"<<endl;
        for(int i=0;i<5;i++){
            cout<<s[i]<<endl;
        }
        cout<<endl;
    }
};
int main(){
    A a;
    return 0;
}