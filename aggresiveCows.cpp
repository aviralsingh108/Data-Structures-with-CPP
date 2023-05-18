// Aggressive Cows Problem

#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int lastPos = arr[0], cowCount = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == m)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int main()
{
    // int arr[5] = {4, 2, 1, 3, 6};
    int arr[6] = {0, 3, 4, 7, 10, 9};
    int m = 4;
    int s = 0;
    int n = 5;
    int ans = -1;
    int maxi = -1;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Maximum distance for a cow " << ans;
}