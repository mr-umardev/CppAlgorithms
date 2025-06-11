#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int n = nums.size(), countpositive = 0, countnegative = 0, totalarea = 0, j = 0;
        vector<int> result;
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] > 0)
            {
                countpositive++;
            }
            else if (nums[i] < 0)
            {
                countnegative++;
            }
        }
        result.push_back(countpositive);
        result.push_back(countnegative);
        totalarea = max(result[j], result[j + 1]);
        return totalarea;
    }

    /*int n = nums.size(), a = 0, b = 0, maxtotal = 0;
    vector<int> positive;
    vector<int> negative;
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] > 0)
        {
            positive.push_back(nums[i]);
        }
        else if (nums[i] < 0)
        {
            negative.push_back(nums[i]);
        }
    }
    a = positive.size();
    b = negative.size();
    maxtotal = max(a, b);
    return maxtotal;
}*/
};
int main()
{
    Solution sol;
    vector<int> nums1 = {-2, -1, -1, 1, 2, 3};
    vector<int> nums2 = {-3, -2, -1, 0, 0, 1, 2};
    vector<int> nums3 = {5, 20, 66, 1314};
    cout << sol.maximumCount(nums1) << endl;
    cout << sol.maximumCount(nums2) << endl;
    cout << sol.maximumCount(nums3) << endl;
}