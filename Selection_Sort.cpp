#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}
int main()
{
    int arr[] = {45, 15, 2, 26, 78, 31, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
