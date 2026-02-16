#include <stdio.h>

int main() {
    int n, binary[32], i=0;

    scanf("%d",&n);

    while(n>0) {
        binary[i++] = n%2;
        n/=2;
    }

    for(int j=i-1;j>=0;j--)
        printf("%d", binary[j]);

    return 0;
}
