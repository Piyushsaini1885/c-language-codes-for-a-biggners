#include <stdio.h>

int prime(int n) {
    int i;

    for(i=2;i<=n/2;i++) {
        if(n%i==0)
            return 0;
    }

    return 1;
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    if(prime(num))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}