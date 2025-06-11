#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no_of_steps = 0;
    cout << "Number of steps" << endl;
    cin >> no_of_steps;
    if (no_of_steps == 1)
    {
        cout << 1;
    }
    if (no_of_steps == 2)
    {
        cout << 2;
    }
    for (int i = 3; i < no_of_steps; ++i)
    {
        cout << (no_of_steps - 1) + (no_of_steps - 2) << endl;
    }
}
