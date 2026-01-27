#include <stdio.h>

int main() {
    int n, sum=0, prod=1, r;
    scanf("%d",&n);

    while(n>0) {
        r = n%10;
        sum += r;
        prod *= r;
        n/=10;
    }

    if(sum == prod)
        printf("Spy Number");
    else
        printf("Not Spy");

    return 0;
}
