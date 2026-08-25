#include <stdio.h>

int main() {
    int a[10][10], r,c,i,j,max;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++) {
        max=a[i][0];
        for(j=1;j<c;j++) {
            if(a[i][j]>max)
                max=a[i][j];
        }
        printf("Row %d Max=%d\n",i+1,max);
    }

    return 0;
}