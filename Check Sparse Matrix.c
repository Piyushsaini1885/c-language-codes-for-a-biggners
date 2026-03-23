#include <stdio.h>

int main() {
    int a[10][10], i, j, r, c, zero=0;

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(a[i][j]==0)
                zero++;

    if(zero > (r*c)/2)
        printf("Sparse Matrix");
    else
        printf("Not Sparse");

    return 0;
}