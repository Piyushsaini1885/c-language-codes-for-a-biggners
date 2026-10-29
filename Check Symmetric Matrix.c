#include <stdio.h>

int main() {
    int a[10][10], i, j, n, flag=1;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i][j] != a[j][i])
                flag=0;
        }
    }

    if(flag)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric");

    return 0;
}