#include <stdio.h>

int main() {
    int l, b, area;

    printf("Enter length and breadth: ");
    scanf("%d %d",&l,&b);

    area = l * b;

    printf("Area = %d",area);

    return 0;
}