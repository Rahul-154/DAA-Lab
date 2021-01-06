#include <stdio.h>
int Partition(int A[], int p, int r)
{
    int pivot, i, j, temp;
    pivot = A[r];
    i = p - 1;
    for (j = p; j < r; j++)
    {
        if (A[j] <= pivot)
        {
            i = i + 1;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;
    return i + 1;
}
void QuickSort(int A[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = Partition(A, p, r);
        QuickSort(A, p, q - 1);
        QuickSort(A, q + 1, r);
    }
}
int main()
{
    int arr[] = {5, 6, 8, 2, 4, 9, 1}, p, r, i;
    p = 0;
    r = sizeof(arr) / sizeof(int);
    QuickSort(arr, p, r - 1);
    printf("sorted array: ");
    for (i = 0; i < r; i++)
        printf(" %d ", arr[i]);
    return 0;
}
