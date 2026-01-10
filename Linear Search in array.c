#include <stdio.h>

int main() {
    int a[50], n, i, x;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            printf("Found at position %d", i + 1);
            return 0;
        }
    }

    printf("Not found");
    return 0;
}
