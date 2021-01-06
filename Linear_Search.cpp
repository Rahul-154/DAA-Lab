#include<stdio.h>
int main() {
    int item, i, len, t=0;
    int arr[]={ 1, 2, 5, 3, 8 };
    printf("enter element to search:");
    scanf(" %d", &item);
    len=sizeof(arr)/sizeof(int);
    for (i=0;i<len;i++) {
        if (arr[i]==item) {
            printf("element found at index :%d", i);
            t=1;
            break;
        }
    }
    if (t==0) {
        printf("element not found");
    }
    return 0;
}
