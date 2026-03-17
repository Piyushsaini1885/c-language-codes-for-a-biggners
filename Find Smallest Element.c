#include <stdio.h>

int main() {
    int arr[100], n, i, min;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    min = arr[0];

    for(i=1;i<n;i++) {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Smallest = %d",min);

    return 0;
}