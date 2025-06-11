#include<bits/stdc++.h>
using namespace std;
    int RemoveDuplicates(vector<int>&nums){
        sort(nums.begin(),nums.end());
        auto last=unique(nums.begin(),nums.end());
        nums.erase(last,nums.end());
        return nums.size();
    }
int main() {
    vector<int>nums={1,2,3,4,4,6,1,3};
    int count=RemoveDuplicates(nums);
    cout<<count<<endl;;
    for(int num : nums){
        cout<<num<<" ";
    }
    cout << endl;

    return 0;
}