// Finding Square root of any number using Binary Search Algorithm
#include <iostream>
using namespace std;
int sqrtInteger(int x)
{
    int s = 0, e = x, mid, ans;
    mid = s + (e - s) / 2;
    while (s <= e)
    {
        int square = mid * mid;
        if (square == x)
        {
            return mid;
        }
        if (square < x)
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double decimalSqrt(double x, double sqrtI)
{
    double factor = 1;
    double ans = sqrtI;
    factor = factor / 100;
    for (double i = ans; i * i < x; i = i + factor)
    {
        ans = i;
    }
    return ans;
}
int main()
{
    int x = 37;
    int sqrtI = sqrtInteger(x);
    double decSqrt = decimalSqrt(x, sqrtI);
    cout << decSqrt;
}
