#include <iostream>
using namespace std;
int main()
{
    int s[11] = {1, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
    int f[11] = {4, 5, 6, 7, 9, 9, 10, 11, 12, 14, 16};
    int n = sizeof(s) / sizeof(int);
    int A[n] = {1};
    int k = 0;
    int count = 0;
    for (int m = 1; m < n; m++)
    {
        if (s[m] >= f[k])
        {
            count++;
            A[count] = m + 1;
            k = m;
        }
    }
    for (int i = 0; i <= count; i++)
    {
        cout << "a" << A[i] << " ";
    }
    return 0;
}
