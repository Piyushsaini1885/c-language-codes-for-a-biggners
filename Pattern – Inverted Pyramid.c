#include <stdio.h>

int main() {
    int i, j, space, n;

    printf("Enter rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(space = 1; space <= n - i; space++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}