#include <stdio.h>

int main() {
    int n, bin[20], i=0;
    scanf("%d",&n);

    while(n>0) {
        bin[i++] = n % 2;
        n /= 2;
    }

    for(i=i-1;i>=0;i--)
        printf("%d",bin[i]);

    return 0;
}
