#include <bits/stdc++.h>
using namespace std;
int main()
{
    int vehicles = 0, wheels = 0;
    cout << "Enter no of wheels:" << endl;
    cin >> wheels;
    cout << "Enter no of vehicles:" << endl;
    cin >> vehicles;
    int two_wheelers = 0, four_wheelers = 0;
    int totalcount = wheels;
    while (totalcount > 0)
    {
        if (totalcount >= 4 && totalcount % 4 == 0)
        {
            four_wheelers++;
            totalcount = totalcount - 4;
        }
        else if (totalcount >= 2 && totalcount % 2 == 0)
        {
            two_wheelers++;
            totalcount = totalcount - 2;
        }
        else
        {
            break;
        }
    }
    cout << "Two wheelers" << two_wheelers << endl;
    cout << "Four wheelers" << four_wheelers << endl;
}