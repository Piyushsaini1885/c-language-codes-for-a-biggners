#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n, i;

    printf("Enter size: ");
    scanf("%d",&n);

    p = (int*) malloc(n * sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&p[i]);

    printf("Elements:\n");

    for(i=0;i<n;i++)
        printf("%d ",p[i]);

    free(p);

    return 0;
}