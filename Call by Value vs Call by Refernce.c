#include <stdio.h>

void val(int x) {
    x = 100;
}

void ref(int *x) {
    *x = 100;
}

int main() {
    int a=10;

    val(a);
    printf("Value=%d\n",a);

    ref(&a);
    printf("Reference=%d",a);

    return 0;
}