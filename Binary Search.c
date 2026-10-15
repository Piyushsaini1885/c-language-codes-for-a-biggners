#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    int low=0, high, mid;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter sorted array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter element: ");
    scanf("%d",&key);

    high = n-1;

    while(low<=high) {
        mid = (low+high)/2;

        if(arr[mid]==key) {
            printf("Found at position %d", mid+1);
            return 0;
        }
        else if(arr[mid] < key)
            low = mid+1;
        else
            high = mid-1;
    }

    printf("Not Found");

    return 0;
}