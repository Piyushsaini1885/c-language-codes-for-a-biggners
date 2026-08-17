#include <stdio.h>

int main() {
    char a[100], b[100];
    char *p=a, *q=b;

    gets(a);

    while(*p) {
        *q = *p;
        p++; q++;
    }
    *q = '\0';

    printf("%s",b);

    return 0;
}