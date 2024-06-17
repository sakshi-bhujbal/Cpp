#include <iostream>
#include <algorithm>
using namespace std;

int duplicate(int* arr, int size) {
    sort(arr, arr + size);
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            return arr[i]; // duplicate found
        }
    }
    return -1; // duplicate not found
}

int main() {
    int arr[7] = {1, 4, 1, 2, 5, 3, 6};

    int result = duplicate(arr, 7);
    if (result != -1) {
        cout << "Duplicate found: " << result << endl;
    } else {
        cout << "No duplicate found" << endl;
    }

    return 0;
}
