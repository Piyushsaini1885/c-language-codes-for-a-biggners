#include <stdio.h>

int main() {
    int i, j, space, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // print spaces
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
