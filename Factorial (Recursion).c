#include <stdio.h>

int fact(int n) {
    if(n == 0)
        return 1;

    return n * fact(n - 1);
}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %d", fact(n));

    return 0;
}