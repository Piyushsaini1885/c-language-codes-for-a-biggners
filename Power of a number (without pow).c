#include <stdio.h>

int main() {
    int base, exp, i, power = 1;
    scanf("%d %d", &base, &exp);

    for(i = 1; i <= exp; i++)
        power *= base;

    printf("Power = %d", power);
    return 0;
}
