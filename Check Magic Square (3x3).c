#include <stdio.h>

int main() {
    int a[3][3], i, j, sum=0, flag=1;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    sum = a[0][0] + a[0][1] + a[0][2];

    for(i=0;i<3;i++) {
        int rowsum=0;
        for(j=0;j<3;j++)
            rowsum += a[i][j];
        if(rowsum != sum)
            flag=0;
    }

    if(flag)
        printf("Magic Square");
    else
        printf("Not Magic Square");

    return 0;
}