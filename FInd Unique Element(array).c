#include <stdio.h>

int main() {
    int arr[100], n, i, res=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
        res ^= arr[i];

    printf("Unique = %d",res);

    return 0;
}