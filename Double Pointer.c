#include <stdio.h>

int main() {
    int a=5;
    int *p=&a;
    int **q=&p;

    printf("Value=%d", **q);

    return 0;
}