#include <iostream>
using namespace std;

int main() {
    int A[7] = {4, 8, 6, 9, 5, 2, 7};
    int n = 7;

    int max = A[0];   // same logic as your notes

    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }

    cout << "Maximum = " << max;

    return 0;
}