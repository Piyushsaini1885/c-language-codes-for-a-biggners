#include <stdio.h>

int main() {
    int num, rev=0;

    scanf("%d",&num);

    while(num) {
        rev = (rev<<1) | (num & 1);
        num >>=1;
    }

    printf("Reversed bits = %d",rev);

    return 0;
}