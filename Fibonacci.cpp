#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, nextTerm;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    return 0;
}