#include <stdio.h>

int main() {
    int a[50], n, i;
    float sum=0;
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum += a[i];
    }

    printf("Average = %.2f", sum/n);
    return 0;
}
