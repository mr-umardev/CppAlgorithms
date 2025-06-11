#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1 = {7, 2, 3};
    list<int> l2 = {2, 3, 0};
    sort(l1.start(), l1.end());
    l1.merge(l2);
    for (int num : l1)
    {
        cout << num;
    }
}