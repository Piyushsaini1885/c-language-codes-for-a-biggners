#include <stdio.h>
int main() {
    int arr[] = {23, 45, 12, 67, 34};
    int max = arr[0], size = 5;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    printf("Largest: %d\n", max);
    return 0;
}
