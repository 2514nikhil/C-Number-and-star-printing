// 1. Write a program in C++ that takes the input of the age of 3 people by the user and finds out the oldest and youngest among them.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age1, age2, age3;

//     cout << "Enter the age of person 1: ";
//     cin >> age1;
//     cout << "Enter the age of person 2: ";
//     cin >> age2;
//     cout << "Enter the age of person 3: ";
//     cin >> age3;

//     int oldest, youngest;

//     if (age1 >= age2 && age1 >= age3)
//         oldest = age1;
//     else if (age2 >= age1 && age2 >= age3)
//         oldest = age2;
//     else
//         oldest = age3;

//     if (age1 <= age2 && age1 <= age3)
//         youngest = age1;
//     else if (age2 <= age1 && age2 <= age3)
//         youngest = age2;
//     else
//         youngest = age3;

//     cout << "The oldest person is " << oldest << " years old." << endl;
//     cout << "The youngest person is " << youngest << " years old." << endl;

//     return 0;
// }

// 2. Write a program in C++ to find positive or negative values using if else from the user input.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     if (number > 0)
//         cout << "The number " << number << " is positive" << endl;
//     else if (number < 0)
//         cout << "The number " << number << " is nagetive" << endl;
//     else
//         cout << "The number is 0" << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int number;
//     long long factorial = 1;

//     // Taking input from user
//     cout << "Enter a positive number: ";
//     cin >> number;

//     // Check for negative input
//     if (number < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     }
//     else {
//         // Calculate factorial using loop
//         for (int i = 1; i <= number; ++i) {
//             factorial *= i;
//         }

//         // Output the result
//         cout << "Factorial of " << number << " is: " << factorial << endl;
//     }

//     return 0;
// }
