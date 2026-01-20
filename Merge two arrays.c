#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i;

    scanf("%d", &n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        c[i] = a[i];

    for(i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}
