#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n, i;

    printf("Enter size: ");
    scanf("%d",&n);

    p = (int*) calloc(n, sizeof(int));

    printf("Elements initialized to:\n");

    for(i=0;i<n;i++)
        printf("%d ",p[i]);

    free(p);

    return 0;
}