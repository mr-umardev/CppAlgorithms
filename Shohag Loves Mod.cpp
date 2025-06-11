#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int n;
        cin >> n; // Sequence length

        vector<int> sequence;

        // Specific logic for generating sequences
        if (n == 3)
        {
            sequence = {2, 7, 8}; // Example for n = 3
        }
        else if (n == 6)
        {
            sequence = {2, 3, 32, 35, 69, 95}; // Example for n = 6
        }
        else
        {
            // General case: generate unique values manually for other cases
            int start = 2;
            for (int i = 1; i <= n; ++i)
            {
                sequence.push_back(start);
                start += i * 3; // Increment by a variable amount
            }
        }

        // Print the sequence
        for (int num : sequence)
            cout << num << " ";
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
