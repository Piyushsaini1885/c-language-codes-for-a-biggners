#include <stdio.h>

int main() {
    int n,i,sum=0;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
        sum += i;

    printf("Sum of odd numbers = %d",sum);

    return 0;
}