#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(sizeof(int));

    *p = 20;

    // forgot free → memory leak

    return 0;
}