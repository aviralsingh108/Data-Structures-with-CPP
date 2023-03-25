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
    float f, c;
    cin >> f;
    c = ((f - 32) * 5) / 9;
    cout << "Converting Fahrenheit to Celsius, Celsius reuslt is " << c;
}