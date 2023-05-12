#include <iostream>
using namespace std;

void sortArray(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i <= j)
    {
        if (arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else
        {
            i++;
            j--;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[8] = {1, 0, 1, 1, 0, 0, 1, 0};
    sortArray(arr, 8);
    printArray(arr, 8);
}