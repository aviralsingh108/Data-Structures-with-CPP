// Painter's Partition Problem

#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int sum = 0, painterCount = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + sum <= mid)
        {
            sum += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > m || arr[i] > mid)
            {
                return false;
            }
            sum = 0;
            sum += arr[i];
        }
    }
    return true;
}

int main()
{
    // int arr[4] = {5, 5, 5, 5};
    int arr[4] = {10, 20, 30, 40};
    int m = 2;
    int s = 0, sum = 0;
    int n = 4;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Equal work distribution, output is " << ans;
}