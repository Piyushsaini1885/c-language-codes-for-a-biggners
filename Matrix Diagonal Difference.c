#include <stdio.h>

int main() {
    int a[10][10], i, j, n;
    int d1=0, d2=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++) {
        d1 += a[i][i];
        d2 += a[i][n-i-1];
    }

    printf("Difference=%d", d1-d2);

    return 0;
}