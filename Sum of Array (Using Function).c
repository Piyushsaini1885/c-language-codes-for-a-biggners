#include <stdio.h>

int sum(int arr[], int n) {
    int i, s=0;

    for(i=0;i<n;i++)
        s += arr[i];

    return s;
}

int main() {
    int a[100], n, i;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Sum = %d", sum(a,n));

    return 0;
}