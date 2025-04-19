#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, originalNum, digit;

    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;

    while(num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if(originalNum == reversed)
        cout << originalNum << " is a Palindrome.";
    else
        cout << originalNum << " is not a Palindrome.";

    return 0;
}