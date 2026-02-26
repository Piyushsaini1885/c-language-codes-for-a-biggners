#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
        printf("Largest = %d", a);
    else if(b >= c)
        printf("Largest = %d", b);
    else
        printf("Largest = %d", c);

    return 0;
}