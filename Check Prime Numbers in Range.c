#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter range: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++) {
        int prime=1;

        for(j=2;j<=i/2;j++) {
            if(i%j==0) {
                prime=0;
                break;
            }
        }

        if(prime)
            printf("%d ",i);
    }

    return 0;
}