#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        printf("A is largest");
    else if(b > c)
        printf("B is largest");
    else
        printf("C is largest");

    return 0;
}
