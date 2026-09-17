#include <stdio.h>

int main() {
    int n, i, num;
    float sum=0;

    printf("Enter count: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        scanf("%d",&num);
        sum += num;
    }

    printf("Average = %.2f", sum/n);

    return 0;
}