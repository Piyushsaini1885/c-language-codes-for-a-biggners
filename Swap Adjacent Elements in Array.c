#include <stdio.h>

int main() {
    int arr[100], n, i, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n-1; i += 2) {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}