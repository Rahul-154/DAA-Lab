#include<stdio.h>
int main() {
    int mid, end, beg, i, len, item;
    int arr[]={ 2, 5, 8, 9, 34, 76 };
    len=sizeof(arr)/sizeof(int);
    beg=0;
    end=len-1;
    mid=(beg+end)/2;
    printf("enter item to search :");
    scanf(" %d", &item);
    while (item != arr[mid] && beg<end) {
        if (item<arr[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }
    if (item==arr[mid])
        printf("element found at index :%d", mid);
    else
        printf("Element not found");
    return 0;
}
