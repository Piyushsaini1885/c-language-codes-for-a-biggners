#include <stdio.h>

int main() {
    int n, dec=0, base=1;
    scanf("%d",&n);

    while(n>0) {
        dec += (n%10)*base;
        base*=2;
        n/=10;
    }

    printf("Decimal = %d", dec);
    return 0;
}
