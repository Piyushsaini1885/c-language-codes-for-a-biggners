#include <stdio.h>
#include <math.h>

int main() {
    int num, rem, i = 0, dec = 0;

    printf("Enter binary: ");
    scanf("%d", &num);

    while(num != 0) {
        rem = num % 10;
        dec += rem * pow(2, i);
        num /= 10;
        i++;
    }

    printf("Decimal = %d", dec);

    return 0;
}