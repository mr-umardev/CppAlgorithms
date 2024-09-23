#include <iostream>
using namespace std;

template <class T>
class ArrayOperations {
private:
    T* arr;
    int size;

public:
    ArrayOperations(T* a, int s) : arr(a), size(s) {}

    T addArrays(T* arr2) {
        T sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i] + arr2[i];
        }
        return sum;
    }

    T findMax() {
        T max_val = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > max_val) {
                max_val = arr[i];
            }
        }
        return max_val;
    }

    T findMin() {
        T min_val = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < min_val) {
                min_val = arr[i];
            }
        }
        return min_val;
    }
};

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    ArrayOperations<int> arr_ops(arr1, size);

    cout << "Sum of arrays: " << arr_ops.addArrays(arr2) << endl;
    cout << "Maximum element: " << arr_ops.findMax() << endl;
    cout << "Minimum element: " << arr_ops.findMin() << endl;

    return 0;
}
