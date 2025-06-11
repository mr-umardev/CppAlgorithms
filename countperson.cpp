#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*unordered_map<string, int> nums;
    int countJack = 0, countJill = 0;
    nums["Jack"] = 1;
    nums["Jill"] = 2;
    nums["Jack"] = 3;
    nums["Jill"] = 4;
    nums["Jack"] = 5;
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        if (it->first == "Jack")
        {
            countJack++;
        }
        else
        {
            countJill++;
        }
    }
    cout << "countJack" << countJack << endl;
    cout << "countJill" << countJill << endl;*/
    unordered_map<string, int> nums;
    unordered_map<string, int> countmap;
    int countJack = 0, countJill = 0;
    nums["Jack"] = 1;
    countmap["Jack"]++;
    nums["Jill"] = 2;
    countmap["Jill"]++;
    nums["Jack"] = 3;
    countmap["Jack"]++;
    nums["Jill"] = 4;
    countmap["Jill"]++;
    nums["Jack"] = 5;
    countmap["Jack"]++;
    for (auto it = countmap.begin(); it != countmap.end(); ++it)
    {
        if (it->first == "Jack")
        {
            countJack = it->second;
        }
        else if (it->first == "Jill")
        {
            countJill = it->second;
        }
    }
    cout << "countJack" << countJack << endl;
    cout << "countJill" << countJill << endl;
}