#include <iostream>
using namespace std;

int main() {
    int num, flag = 0;
    cout << "Enter a number: ";
    cin >> num;

    if(num <= 1) {
        cout << "Not a Prime number.";
        return 0;
    }

    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        cout << num << " is a Prime number.";
    else
        cout << num << " is not a Prime number.";

    return 0;
}