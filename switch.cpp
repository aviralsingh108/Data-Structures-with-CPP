#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num = 10;
    while (1)
    {
        switch (num)
        {
        case 10:
            cout << "Input is 10\n";
            break;
        }
        exit(0);
    }
}

// Switch doesn’t takes float and strings for ‘case’ condition. It takes Int and char.

// Continue statement in case of switch is not valid