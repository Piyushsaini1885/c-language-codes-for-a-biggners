#include <stdio.h>

int main() {
    int n, oct[20], i=0;
    scanf("%d",&n);

    while(n>0) {
        oct[i++] = n%8;
        n/=8;
    }

    for(i=i-1;i>=0;i--)
        printf("%d", oct[i]);

    return 0;
}
