#include <stdio.h>

int sumDigits(int n) {
    if(n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Sum = %d", sumDigits(num));

    return 0;
}