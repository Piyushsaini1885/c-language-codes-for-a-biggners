#include <stdio.h>

int main() {
    int a[100], n, i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Total Elements = %d", n);
    return 0;
}
