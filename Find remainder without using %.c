#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    printf("Remainder = %d", a - (a/b)*b);
    return 0;
}
