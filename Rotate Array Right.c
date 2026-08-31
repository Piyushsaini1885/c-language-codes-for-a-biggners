#include <stdio.h>

int main() {
    int arr[100], n, i, last;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    last = arr[n-1];

    for(i=n-1;i>0;i--)
        arr[i] = arr[i-1];

    arr[0] = last;

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}