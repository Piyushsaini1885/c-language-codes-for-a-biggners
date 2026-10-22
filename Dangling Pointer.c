#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(sizeof(int));

    *p = 10;
    free(p);

    p = NULL; // safe practice

    return 0;
}