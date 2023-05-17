// Find Pivot Index in an Array
#include <iostream>
using namespace std;

int findPivot(int arr[], int s)
{
    int start = 0, end = s - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        cout << "se " << start << " " << end << endl;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    // int arr[5] = {8, 10, 17, 1, 3};
    int arr[5] = {7, 9, 1, 2, 3};
    cout << "The Pivot Index is: " << findPivot(arr, 5);
}