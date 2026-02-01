#include <stdio.h>

int main() {
    int amt;
    scanf("%d",&amt);

    printf("2000 = %d\n", amt/2000); amt%=2000;
    printf("500 = %d\n", amt/500); amt%=500;
    printf("200 = %d\n", amt/200); amt%=200;
    printf("100 = %d\n", amt/100);

    return 0;
}
