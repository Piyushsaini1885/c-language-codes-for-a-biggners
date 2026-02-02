#include <stdio.h>

int main() {
    int n, count=0;
    scanf("%d",&n);

    while(n>0) {
        count += n & 1;
        n >>= 1;
    }

    printf("Set Bits = %d", count);
    return 0;
}
