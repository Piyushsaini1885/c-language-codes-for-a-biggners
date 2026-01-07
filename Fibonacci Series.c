#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, next, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci: %d, %d, ", t1, t2);
    for (i = 3; i <= n; ++i) {
        next = t1 + t2;
        printf("%d, ", next);
        t1 = t2;
        t2 = next;
    }
    return 0;
}
