#include <stdio.h>

int main() {
    char str[100];
    char *p=str;
    int count=0;

    gets(str);

    while(*p) {
        count++;
        p++;
    }

    printf("Length=%d",count);

    return 0;
}