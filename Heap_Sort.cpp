#include <stdio.h>
void heapify(int a[], int n, int i)
{
    int l, r, largest, temp;
    l = 2 * i + 1;
    r = 2 * i + 2;
    largest = i;
    if (l < n && a[largest] < a[l])
        largest = l;
    if (r < n && a[largest] < a[r])
        largest = r;
    if (largest != i)
    {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a, n, largest);
    }
}
void heapsort(int a[], int n)
{
    int i, temp;
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
    for (i = n - 1; i > 0; i--)
    {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a, i, 0);
    }
}
int main()
{
    int a[] = {5, 3, 17, 10, 84, 19, 6, 21, 9}, i;
    int n = sizeof(a) / sizeof(int);
    heapsort(a, n);
    for (i = 0; i < n; i++)
        printf(" %d ", a[i]);
    return 0;
}
