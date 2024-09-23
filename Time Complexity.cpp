#include<ctime>
#include<vector>
#include<cstdlib>
#include<iostream>
using namespace std;




void bubbleSort(vector<int> &vec){
    int n=vec.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(vec[j+1]<vec[j]) swap(vec[j+1],vec[j]);
        }
    }
}
//1) linear search
//2) sort a given set of elements using bubble sort and determine the time required to sort the elements. repeat the experiment for different values for n (the number of elements in the list to be sorted), and plot the graph for time taken vs input size
int main(){
    vector<int> vec;
    int n=10000;
    for(int i=0;i<n;i++){
        vec.push_back(rand()%n);
    }

    clock_t t;
    t = clock();
    bubbleSort(vec);
    t = clock() - t;
    // for(int i=0;i<n;i++){
    //     cout<<vec[i]<<" ";
    // }
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    cout << "The program took "<< time_taken <<" seconds to execute";
    return 0;
}