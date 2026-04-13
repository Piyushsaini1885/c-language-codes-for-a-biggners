#include <stdio.h>

int main() {
    int arr[100], n, i, first;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    first = arr[0];

    for(i=0;i<n-1;i++)
        arr[i] = arr[i+1];

    arr[n-1] = first;

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}