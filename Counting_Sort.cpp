#include <stdio.h>
int main()
{
    int a[100];
    int len;
    int b[100], c[100], i, j, max = 0;
    printf("enter length:-");
    scanf(" %d", &len);
    for (i = 1; i <= len; i++)
        scanf(" %d", &a[i]);
    for (i = 1; i <= len; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    for (i = 0; i <= max + 1; i++)
        c[i] = 0;
    for (i = 1; i <= len; i++)
        c[a[i]] = c[a[i]] + 1;
    for (i = 1; i <= max; i++)
        c[i] = c[i] + c[i - 1];
    for (i = len; i > 0; i--)
    {
        b[c[a[i]]] = a[i];
        c[a[i]] = c[a[i]] - 1;
    }
    printf("sorted array:-\n");
    for (i = 1; i <= len; i++)
        printf(" %d ", b[i]);
}
