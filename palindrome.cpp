// Find Palindrome

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ch[] = "aviral";
    // char ch[] = "malayalam";
    int s = 0, e = strlen(ch) - 1, f = 0;
    while (s < e)
    {
        if (ch[s++] != ch[e--])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        cout << "Not Palindrome ";
    else
        cout << "Palindrome";
    return 0;
}