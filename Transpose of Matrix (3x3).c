#include <stdio.h>

int main() {
    int a[3][3], i, j;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("Transpose:\n");

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }

    return 0;
}
