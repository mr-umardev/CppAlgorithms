#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums1 = {7, 1, 3, 5};
    vector<int> nums2 = {4, 6, 8, 2};
    vector<int> result;
    // sort(nums1.begin(),nums1.end());
    // nums1.merge(nums2);
    for (int num : nums1)
    {
        result.push_back(num);
    }
    for (int nums : nums2)
    {
        result.push_back(nums);
    }
    sort(result.begin(), result.end());
    for (int res : result)
    {
        cout << res;
    }
}