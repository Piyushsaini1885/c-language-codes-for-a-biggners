#include <stdio.h>

int main() {
    int a[10][10], i, j, r, c, sum;

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++) {
        sum=0;
        for(j=0;j<c;j++)
            sum += a[i][j];
        printf("Sum of row %d = %d\n", i+1, sum);
    }

    return 0;
}