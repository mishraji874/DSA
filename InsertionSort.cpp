#include <iostream>
using namespace std;
void InsertionSort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr, n);
    cout << "Sorted Array: ";
    printArray(arr, n);
    return 0;
}