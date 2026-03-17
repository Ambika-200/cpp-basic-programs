#include <iostream>
using namespace std;

int main() {
    int A[3][3] = {
        {5, 2, 4},
        {6, 3, 6},
        {5, 6, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}