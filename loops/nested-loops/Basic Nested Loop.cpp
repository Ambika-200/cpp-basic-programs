#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {        // rows
        for (int j = 0; j < 3; j++) {    // columns
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}