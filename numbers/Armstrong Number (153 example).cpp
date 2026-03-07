
#include <iostream>
using namespace std;

int main() {
    int n, r, sum = 0, m;

    cout << "Enter number: ";
    cin >> n;

    m = n;

    while (n > 0) {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }

    if (sum == m)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";

    return 0;
}