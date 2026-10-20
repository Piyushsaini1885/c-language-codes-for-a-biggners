#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i*i <= n; i++) {
        if(i*i == n) {
            flag = 1;
            break;
        }
    }

    if(flag)
        printf("Perfect Square");
    else
        printf("Not Perfect Square");

    return 0;
}