#include <stdio.h>

int main() {
    int base, exp, result=1;

    scanf("%d %d",&base,&exp);

    for(int i=1;i<=exp;i++)
        result *= base;

    printf("Result = %d", result);

    return 0;
}
