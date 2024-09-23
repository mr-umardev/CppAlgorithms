#include <bits/stdc++.h>
using namespace std;
int temp;
void bubbleSort(vector<int>&s) {
    int n=s.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (s[j] > s[j + 1]) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int main() {
    vector<int>s;
    int n = 7000;

    for (int i = 0; i < n; ++i) {
        s.push_back(rand()%n);
    }
    clock_t q;
    q=clock();
    bubbleSort(s);
    q=clock()-q;
    double time_taken=((double)q)/CLOCKS_PER_SEC;
    cout << "Time taken "<< time_taken <<" to execute";

    return 0;
}
