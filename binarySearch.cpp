#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {5, 11, 13, 17, 19, 27};
    int key = 19;
    int start = 0;
    int end = 5;
    int res = 0;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        cout << "Start End Mid: " << start << " " << end << " " << mid << endl;
        if (key == arr[mid])
        {
            res = 1;
            break;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if (res == 1)
    {
        cout << "Key found at position " << mid;
    }
    else
    {
        cout << "Key Not Found";
    }
}