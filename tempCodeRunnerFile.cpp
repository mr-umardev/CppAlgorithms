#include<bits/stdc++.h>
using namespace std;
int findpeak(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(arr[0]>=arr[1]){
        return 0;
    }
    if(arr[n-1]>=arr[n-2]){
        return n-1;
    }
    for(auto i=0;i<n-1;i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
            return i;
        }
    }
}
int main(){
    int arr[]={10,25,16,67,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=findpeak(arr,n);
    cout<<result;
    return 0;
}