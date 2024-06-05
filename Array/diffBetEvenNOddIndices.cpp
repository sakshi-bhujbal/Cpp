#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sumEvenElements = 0;
    int sumOddIndices = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            sumEvenElements += arr[i];
        }
        if (i % 2 != 0) {
            sumOddIndices += arr[i];
        }
    }

    int difference = sumEvenElements - sumOddIndices;

    cout << "Difference between sum of even elements and sum of elements at odd indices: " << difference << endl;

    return 0;
}
