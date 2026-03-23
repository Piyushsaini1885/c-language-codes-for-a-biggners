#include <stdio.h>

int main() {
    int a[10][10], i, j, n, temp;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("Transpose:\n");

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}