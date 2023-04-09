#include <iostream>
#include <math.h>
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
    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 0, value = i;
    //     while (j < i)
    //     {
    //         cout << value << " ";
    //         j++;
    //         value--;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // AAA BBB CCC
    // int n, i = 0;
    // cin >> n;
    // while (i < n)
    // {
    //     int j = 0;
    //     char ch = 'A';
    //     ch = ch + i;
    //     while (j < n)
    //     {
    //         cout  << ch << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // A BC DEF GHIJ
    // int n, i = 0;
    // char ch = 'A';
    // cin >> n;
    // while (i < n)
    // {
    //     int j = 0;
    //     while (j <= i)
    //     {
    //         cout << ch << " ";
    //         j++;
    //         ch++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // D CD BCD ABCD
    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 0;
    //     char ch = 'A' + n - i;
    //     while (j < i)
    //     {
    //         cout << ch << " ";
    //         j++;
    //         ch++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    //___* __** _*** ****
    // int n, i = 0;
    // char ch = 'A';
    // cin >> n;
    // while (i < n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         if (n - j <= i)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    //___* __** _*** ****
    // int n, i = 0;
    // cin >> n;
    // while (i < n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         if (n - j <= i)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    //**** ***_ **__ *___
    // int n, i = 0;
    // cin >> n;
    // while (i < n)
    // {
    //     int j = n;
    //     while (j > 0)
    //     {
    //         if (j > i)
    //             cout << "* ";
    //         else
    //             cout << " ";
    //         j--;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // 1111 222 33 4
    // int n, i = 0;
    // cin >> n;
    // while (i < n)
    // {
    //     int j = n;
    //     while (j > 0)
    //     {
    //         if (n - j < i)
    //             cout << "  ";
    //         else
    //             cout << i + 1 << " ";
    //         j--;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // ___1___ __121__ _12321_ 1234321
    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1, a = 1, b = 1;
    //     while (j <= (2 * n - 1))
    //     {
    //         if (j <= n)
    //         {
    //             if (j <= n - i)
    //             {
    //                 cout << "  ";
    //             }
    //             else
    //             {
    //                 cout << a << " ";
    //                 a++;
    //             }
    //         }
    //         else if (j > n)
    //         {
    //             if (b < i)
    //             {
    //                 cout << b << " ";
    //                 b++;
    //             }
    //             else
    //                 cout << "  ";
    //         }
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // * ** *** **** using one loop
    // int n;
    // cin >> n;
    // for (int i = 1, j = 1; i <= n;)
    // {
    //     if (i == j)
    //     {
    //         cout << "* " << endl;
    //         j = 1;
    //         i++;
    //     }
    //     else if (j < i)
    //     {
    //         j++;
    //         cout << "* ";
    //     }
    // }

    // 1234554321 1234**4321 123****321 12******21 1********1
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int x = 1; x <= n - (i - 1); x++)
    //     {
    //         cout << x << " ";
    //     }
    //     if ((i - 1) > 0)
    //     {
    //         for (int y = 1; y <= 2 * (i - 1); y++)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     for (int z = n - (i - 1); z > 0; z--)
    //     {
    //         cout << z << " ";
    //     }
    //     cout << endl;
    // }

    // Logical and Bitwise Operators
    // int a = 5, b = 10;
    // cout << (a | b) << endl;  // 15
    // cout << (a || b) << endl; // 1
    // cout << (a & b) << endl;  // 0
    // cout << (a && b) << endl; // 1
    // cout << ~a;

    // Fibonacci Series
    // int n, a = 0, b = 1;
    // cin >> n;
    // if (n == 1)
    //     cout << a;
    // else if (n == 2)
    //     cout << a << " " << b;
    // else
    // {
    //     cout << a << " " << b << " ";
    //     for (int i = 2; i < n; i++)
    //     {
    //         cout << a + b << " ";
    //         b = a + b;
    //         a = b - a;
    //     }
    // }

    // Prime No
    // int n, flag = 0;
    // cin >> n;

    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Not Prime";
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag == 0)
    //     cout << "Prime";

    // Decimal to Binary
    // int n, ans = 0, i = 0;
    // cin >> n;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i) + ans);
    //     n = n >> 1;
    //     i++;
    // }
    // cout << ans;

    // Binary to Decimal
    int n, ans = 0, i = 0;
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
            ans += pow(2, i);
        n = n / 10;
        i++;
    }
    cout << ans;
}
