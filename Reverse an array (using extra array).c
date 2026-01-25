#include <stdio.h>

int main() {
    int a[50], b[50], n, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
        b[i] = a[n - i - 1];

    for(i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}
