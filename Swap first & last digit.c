#include <stdio.h>

int main() {
    int n, first, last, temp, digits=0;
    scanf("%d",&n);

    temp = n;
    last = n % 10;

    while(temp >= 10) {
        temp /= 10;
        digits++;
    }

    first = temp;
    n = n - first*(int)pow(10,digits) + last*(int)pow(10,digits);
    n = n - last + first;

    printf("Result = %d", n);
    return 0;
}
