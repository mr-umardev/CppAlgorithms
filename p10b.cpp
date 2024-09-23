
// Templates:
// a. Illustrate class templates in a C++ program for the following operations: Adding two arrays, finding the max and min in an array.
// b. Develop a C++ program to sort using bubble sort by applying function templates.

#include<iostream>
using namespace std;


template<class T>
class bsort
{
    T *arr;
    public:
        void setData(T size)
        {
            arr= new T[size];
            cout<<"Enter the elements of the array: \n";
            for (int i = 0; i < size; i++)
            {
                cin>>arr[i];
            } 
            cout<<endl<<"The array before bubble sort is: \n";
            for (int i = 0; i < size; i++)
            {
                cout<<" "<<arr[i];
            }                    
        }
        void sort(T size)
        {
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size-1-i;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        arr[j]=arr[j]+arr[j+1];
                        arr[j+1]=arr[j]-arr[j+1];
                        arr[j]=arr[j]-arr[j+1];
                    }
                }
            }
            cout<<endl<<"The array after bubble sort is: \n";
            for (int i = 0; i < size; i++)
            {
                cout<<" "<<arr[i];
            }
            
        }
};

int main()
{
    bsort<int> b;
    b.setData(3);
    b.sort(3);
    return 0;
}