#include <stdio.h>

int main() {
    int num=5, pos=1;

    printf("Set=%d\n", num | (1<<pos));
    printf("Clear=%d\n", num & ~(1<<pos));
    printf("Toggle=%d\n", num ^ (1<<pos));

    return 0;
}