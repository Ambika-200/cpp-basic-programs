
#include <iostream>
using namespace std;

int main() {
    int n, r, rev = 0, m;

    cout << "Enter number: ";
    cin >> n;

    m = n;

    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if (rev == m)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}