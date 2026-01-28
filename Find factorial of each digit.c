#include <stdio.h>

int main() {
    int n, r, fact, i;
    scanf("%d",&n);

    while(n>0) {
        r = n % 10;
        fact = 1;
        for(i=1;i<=r;i++)
            fact *= i;
        printf("%d ", fact);
        n /= 10;
    }
    return 0;
}
