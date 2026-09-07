#include <stdio.h>

int main() {
    int n, i, sum=0, total;

    scanf("%d",&n);

    int arr[n-1];

    for(i=0;i<n-1;i++) {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    total = n*(n+1)/2;

    printf("Missing=%d", total - sum);

    return 0;
}