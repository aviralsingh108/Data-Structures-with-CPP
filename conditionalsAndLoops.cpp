#include <iostream>
using namespace std;
int main()
{
    // int a, b;
    // cin >> a >> b;
    // if (a > b)
    //     cout << "Answer is A";
    // else
    //     cout << "Answer is B";

    // cin.get()
    // int c;
    // c = cin.get();
    // cout << c << endl;

    // check number and uppercase, lowercase characters
    // char ch;
    // cin >> ch;
    // if (ch > 97 && ch < 122)
    //     cout << "Lowercase";
    // else if (ch > 65 && ch < 90)
    //     cout << "Uppercase";
    // else if (ch > 48 && ch < 57)
    //     cout << "Number";

    // sum of N numbers
    // int n, sum = 0;
    // cin >> n;
    // while (n > 0)
    // {
    //     sum += n;
    //     n--;
    // }
    // cout << sum << endl;

    // sum of all even numbers
    // int n, i = 2, sum = 0;
    // cin >> n;
    // while (i <= n)
    // {
    //     sum += i;
    //     i += 2;
    // }
    // cout << sum << endl;

    // Fahrenheit to Celsius
    // float f, c;
    // cin >> f;
    // c = ((f - 32) * 5) / 9;
    // cout << "Converting Fahrenheit to Celsius, Celsius reuslt is " << c;

    // Prime No
    // int n, i = 2, f = 0;
    // cin >> n;
    // while (i < n)
    // {
    //     if (n % i == 0)
    //         f = 1;
    //     i++;
    // }
    // if (f == 0)
    //     cout << "Prime";
    // else
    //     cout << "Not Prime";

    // Patterns
    //  4 X 4
    // int n, i = 0;
    // cin >> n;
    // while (i < n)
    // {
    //     int j = 0;
    //     while (j < n)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // 111 222 333...
    // int n, i = 0;
    // cin >> n;
    // while (i < n)
    // {
    //     int j = 0;
    //     while (j < n)
    //     {
    //         cout << i + 1 << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // 123 456 789
    // int n, i = 0, k = 1;
    // cin >> n;
    // while (i < n)
    // {
    //     int j = 0;
    //     while (j < n)
    //     {
    //         cout << k << " ";
    //         j++;
    //         k++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // * ** *** *** ****
    // int n, i = 0;
    // cin >> n;
    // while (i < n)
    // {
    //     int j = 0;
    //     while (j <= i)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // 1 22 333 4444 5555
    // int n, i = 0;
    // cin >> n;
    // while (i < n)
    // {
    //     int j = 0;
    //     while (j <= i)
    //     {
    //         cout << i + 1 << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // 1 23 345 4567
    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 0;
    //     while (j < i)
    //     {
    //         cout << i + j << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // 1 21 321 4321
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 0, value = i;
        while (j < i)
        {
            cout << value << " ";
            j++;
            value--;
        }
        i++;
        cout << endl;
    }
}