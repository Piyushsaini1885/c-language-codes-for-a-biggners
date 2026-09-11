#include <stdio.h>

int main() {
    int a[3][3], i, j, flag = 1;

    printf("Enter matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))
                flag = 0;
        }
    }

    if(flag)
        printf("Identity Matrix");
    else
        printf("Not Identity Matrix");

    return 0;
}