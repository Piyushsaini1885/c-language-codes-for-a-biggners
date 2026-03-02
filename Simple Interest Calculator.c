#include <stdio.h>

int main() {
    float p, r, t, si;

    printf("Enter principal, rate, time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    printf("Simple Interest = %.2f", si);

    return 0;
}