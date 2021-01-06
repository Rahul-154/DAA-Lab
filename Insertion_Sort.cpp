#include <stdio.h>
int main()
{
    int len, i, j, temp;
    int arr[] = {4, 7, 2, 8, 3, 9, 5, 6, 1};
    len = sizeof(arr) / sizeof(int);
    for (i = 1; i <= len - 1; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    printf("Sorted list :\n");
    for (i = 0; i <= len - 1; i++)
        printf("%d", arr[i]);
    return 0;
}
