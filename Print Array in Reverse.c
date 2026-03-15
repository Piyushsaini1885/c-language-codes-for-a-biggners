#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Reverse array:\n");

    for(i=n-1;i>=0;i--)
        printf("%d ",arr[i]);

    return 0;
}