#include <stdio.h>
int main()
{
    int count, temp, i, j, array[] = {5, 7, 1, 4, 3, 8, 6};
    count = sizeof(array) / sizeof(int);
    for (i = count - 2; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted elements: ");
    for (i = 0; i < count; i++)
        printf(" %d", array[i]);

    return 0;
}
