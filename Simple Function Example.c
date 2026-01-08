#include <stdio.h>
int square(int x) {
    return x * x;
}
int main() {
    int num = 5;
    printf("Square of %d: %d\n", num, square(num));
    return 0;
}
