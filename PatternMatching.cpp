#include <bits/stdc++.h>
using namespace std;

void matchStrings(string str, string matchstr)
{
    string result = "";
    int length = str.length();
    if (str.length() != matchstr.length())
    {
        cout << "No match" << endl;
        return;
    }
    for (int i = 0; i < length; ++i)
    {
        if (str[i] == matchstr[i])
        {
            result += str[i];
        }
    }
    if (result.empty())
    {
        cout << "No match" << endl;
    }
    else
    {
        cout << "Matched part of string: " << result << endl;
    }
}

int main()
{
    string str, matchstr;

    cout << "Enter string to match:" << endl;
    cin >> str;
    cout << "Enter match string value:" << endl;
    cin >> matchstr;

    matchStrings(str, matchstr);

    return 0;
}
