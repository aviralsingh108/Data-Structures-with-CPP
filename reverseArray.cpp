#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{

    for (int i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[6] = {1, 2, 3, 4, 5, 6};
    reverseArray(arr, 7);
    printArray(arr, 7);
    reverseArray(arr2, 6);
    printArray(arr2, 6);
}