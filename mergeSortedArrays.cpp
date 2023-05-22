// Merge two sorted arrays
#include <iostream>
using namespace std;

void mergeArray(int arr[], int n, int arr2[], int m, int res[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr[i] < arr2[j])
        {
            res[k++] = arr[i++];
        }
        else
        {
            res[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        res[k++] = arr[i++];
    }
}

int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int res[8] = {0};
    mergeArray(arr, 5, arr2, 3, res);
    for (int i = 0; i < 8; i++)
    {
        cout << res[i] << " ";
    }
}