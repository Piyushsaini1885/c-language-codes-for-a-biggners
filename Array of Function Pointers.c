#include <stdio.h>

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }

int main() {
    int (*fp[2])(int,int) = {add, sub};

    printf("Add=%d\n", fp[0](10,5));
    printf("Sub=%d\n", fp[1](10,5));

    return 0;
}