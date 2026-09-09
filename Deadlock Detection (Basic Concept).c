#include <stdio.h>

int main() {
    int allocation[3][3], max[3][3], need[3][3];
    int i,j;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++) {
            scanf("%d",&allocation[i][j]);
            scanf("%d",&max[i][j]);
            need[i][j] = max[i][j] - allocation[i][j];
        }

    printf("Need Matrix:\n");

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf("%d ", need[i][j]);
        printf("\n");
    }

    return 0;
}