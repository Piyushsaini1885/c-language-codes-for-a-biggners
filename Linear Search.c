#include <stdio.h>

int main() {
    int arr[100], n, i, key;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++) {
        if(arr[i]==key) {
            printf("Found at position %d", i+1);
            return 0;
        }
    }

    printf("Not Found");

    return 0;
}