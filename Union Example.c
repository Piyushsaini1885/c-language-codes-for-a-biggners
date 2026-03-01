#include <stdio.h>

union data {
    int i;
    float f;
};

int main() {
    union data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 5.5;
    printf("Float: %f\n", d.f);

    return 0;
}