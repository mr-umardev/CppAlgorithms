#include<bits/stdc++.h>
using namespace std;
class MergeSort{
    int size;
    int element;
    vector<int>s;
    int n;
    public:
    MergeSort(){
        cout<<"Enter size of array:"<<endl;
        cin>>size;
        cout<<"The elements of the array:"<<endl;
        for(auto i=0;i<size;i++){
            cin>>element;
            s.push_back(element);

        }
    }
    void Sort(){
        for(int i=0;i<n;i++){//
            if(s[i]>s[i+1]){
                s[i]=s[i];
            }
            else{
                s[i]=s[i+1];
            }
        }
    }
    void Merge(int start,int end,int index){
            int mid=s[0]+s[size]/2;

        }
    }
}