// Insertion Sort

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    int n = 7;
    for (int i = 1; i < n; i++)
    {
        int j, temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}