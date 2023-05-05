// Finding Minimum and Maximum in an Array

#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int getMin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int main()
{
    int arr[5] = {10, 3, 6, 2, 9};
    cout << getMax(arr, 5) << endl;
    cout << getMin(arr, 5);
}
