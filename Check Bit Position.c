#include <stdio.h>

int main() {
    int num=5, pos=2;

    if(num & (1<<pos))
        printf("Bit is 1");
    else
        printf("Bit is 0");

    return 0;
}