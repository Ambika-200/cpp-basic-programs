#include <iostream>
using namespace std;

int main() {
    int A[10], n = 10, key;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter key: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (A[i] == key) {
            cout << "Found at index " << i;
            return 0;
        }
    }

    cout << "Not found";

    return 0;
}