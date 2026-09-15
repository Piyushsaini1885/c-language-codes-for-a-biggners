#include <stdio.h>

int add(int a,int b) {
    return a+b;
}

int main() {
    int (*fp)(int,int);

    fp = add;

    printf("%d", fp(5,3));

    return 0;
}