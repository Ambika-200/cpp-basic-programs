#include <iostream>
using namespace std;

int main() {
    int A[5] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = n - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }

    return 0;
}