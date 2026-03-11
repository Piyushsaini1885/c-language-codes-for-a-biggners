#include <stdio.h>

int main() {
    int arr[100], n, i, max;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    max = arr[0];

    for(i=1;i<n;i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest = %d",max);

    return 0;
}