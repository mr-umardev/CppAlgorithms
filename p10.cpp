// Templates:
// a. Illustrate class templates in a C++ program for the following operations: Adding two arrays, finding the max and min in an array.
// b. Develop a C++ program to sort using bubble sort by applying function templates.

#include <iostream>
using namespace std;

template <class t>
class arrays
{
    t *arr1, *arr2, *arr3, min, max;
    int size;

public:
    arrays() {}
    arrays(int s) : size(s)
    {
        arr1= new t[size];
        arr2= new t[size];
        arr3= new t[size];
        cout << endl
             << "Enter the elements for the first array: \n";
        for (int i = 0; i < size; i++)
        {
            cin >> arr1[i];
        }
        cout << endl
             << "Enter the elements for the second array: \n";
        for (int i = 0; i < size; i++)
        {
            cin >> arr2[i];
        }
    }
    void add()
    {
        cout << "The sum of above arrays is: \n";
        for (int i = 0; i < size; i++)
        {
            arr3[i] = arr1[i] + arr2[i];
            cout << " " << arr3[i];
        }
        cout << endl;
    }
    void maxele()
    {
        max = arr1[0];
        for (int i = 1; i < size; i++)
        {
            if (arr1[i] > max)
                max = arr1[i];
        }
        cout << "The largest number in array 1 is: " << max << endl;
    }
    void minele()
    {
        min = arr1[0];
        for (int i = 1; i < size; i++)
        {
            if (arr1[i] < min)
                min = arr1[i];
        }
        cout << "The smallest number in array 1 is: " << min << endl;
    }
};

int main()
{
    int s1;
    cout << "Enter the size of the array: ";
    cin >> s1;
    cout << endl;
    arrays<int> a(s1);
    a.add();
    a.maxele();
    a.minele();
    return 0;
}