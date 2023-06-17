// Find lenght and Reverse a string

#include <iostream>
using namespace std;

int main()
{
    char ch[10];
    cin >> ch;
    // ch[2] = '\0';
    cout << endl
         << "Before Reverse" << endl;
    cout << ch << endl;
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    cout << "Length of name is = " << count << endl;
    cout << "After Reverse" << endl;
    int s = 0, e = count - 1;
    while (s < e)
    {
        swap(ch[s++], ch[e--]);
    }
    cout << ch;

    return 0;
}