#include <stdio.h>

int main() {
    int x = 1;
    char *p = (char*)&x;

    if(*p)
        printf("Little Endian");
    else
        printf("Big Endian");

    return 0;
}