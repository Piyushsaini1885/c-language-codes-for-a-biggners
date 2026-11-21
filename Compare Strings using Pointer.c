#include <stdio.h>

int main() {
    char a[100], b[100];
    char *p=a, *q=b;

    gets(a);
    gets(b);

    while(*p && *q) {
        if(*p != *q) {
            printf("Not Equal");
            return 0;
        }
        p++; q++;
    }

    if(*p==*q)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}