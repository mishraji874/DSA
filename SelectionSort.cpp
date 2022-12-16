#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void SelectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            if (min != i)
            {
                swap(&arr[min], &arr[i]);
            }
        }
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 3, 5, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, n);
    cout << "Sorted Array: ";
    printArray(arr, n);
    return 0;
}