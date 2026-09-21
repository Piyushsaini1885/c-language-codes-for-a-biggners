#include <stdio.h>

int main() {
    int num, count=0;

    scanf("%d",&num);

    while(num) {
        count += num & 1;
        num >>= 1;
    }

    printf("Set bits = %d",count);

    return 0;
}