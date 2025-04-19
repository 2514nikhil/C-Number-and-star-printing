#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    // for(int i = n; i >= 1; i--) {
    //     for(int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // * * * * *
    //   * * * *
    //     * * *
    //       * *
    //         *
    // for(int i = n; i >= 1; i--) {
    //     for(int j = i; j < n; j++) cout << "  ";
    //     for(int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *
    // for(int i = 1; i <= n; i++) {
    //     for(int j = i; j < n; j++) cout << "  ";
    //     for(int k = 1; k <= i; k++) cout << "* ";
    //     cout << endl;
    // }

    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n - i; j++) cout << " ";
    //     for(int k = 1; k <= i; k++) cout << "* ";
    //     cout << endl;
    // }

    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    // for(int i = n; i >= 1; i--) {
    //     for(int j = 0; j < n - i; j++) cout << " ";
    //     for(int k = 1; k <= i; k++) cout << "* ";
    //     cout << endl;
    // }

    //     *
    //    * *
    //   * * *
    //    * *
    //     *
    // for(int i = 1; i <= n; i++) {
    //     for(int j = i; j < n; j++) cout << " ";
    //     for(int k = 1; k <= 2*i - 1; k++) cout << "*";
    //     cout << endl;
    // }
    // for(int i = n-1; i >= 1; i--) {
    //     for(int j = n; j > i; j--) cout << " ";
    //     for(int k = 1; k <= 2*i - 1; k++) cout << "*";
    //     cout << endl;
    // }

    // * * * *
    // * * * *
    // * * * *
    // * * * *
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n; j++) cout << "* ";
    //     cout << endl;
    // }

    // * * * *
    // *     *
    // *     *
    // * * * *
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n; j++) {
    //         if(i == 1 || i == n || j == 1 || j == n)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << endl;
    // }

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= i; j++) cout << i << " ";
    //     cout << endl;
    // }

    //     1
    //    1 1
    //   1 2 1
    //  1 3 3 1
    // 1 4 6 4 1
    // int coef = 1;
    // for(int i = 0; i < n; i++) {
    //     for(int space = 1; space <= n-i; space++) cout << " ";
    //     for(int j = 0; j <= i; j++) {
    //         if (j==0 || i==0)
    //             coef = 1;
    //         else
    //             coef = coef * (i - j + 1) / j;
    //         cout << coef << " ";
    //     }
    //     cout << endl;
    // }

    // *       *
    // * *   * *
    // * * * * *
    // * *   * *
    // *       *
    // Upper half
    // for (int i = 1; i <= n - 1; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //         cout << "*";
    //     for (int j = 1; j <= 2 * (n - i); j++)
    //         cout << " ";
    //     for (int j = 1; j <= i; j++)
    //         cout << "*";
    //     cout << endl;
    // }
    //
    // Lower half
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //         cout << "*";
    //     for (int j = 1; j <= 2 * (n - i); j++)
    //         cout << " ";
    //     for (int j = 1; j <= i; j++)
    //         cout << "*";
    //     cout << endl;
    // }

    return 0;
}