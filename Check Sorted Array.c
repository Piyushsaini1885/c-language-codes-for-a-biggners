#include <stdio.h>

int main() {
    int arr[100], n, i, sorted = 1;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i+1]) {
            sorted = 0;
            break;
        }
    }

    if(sorted)
        printf("Sorted");
    else
        printf("Not Sorted");

    return 0;
}