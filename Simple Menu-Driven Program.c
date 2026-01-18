#include <stdio.h>

int main() {
    int ch, a, b;
    scanf("%d %d %d", &ch, &a, &b);

    switch(ch) {
        case 1: printf("%d", a + b); break;
        case 2: printf("%d", a - b); break;
        case 3: printf("%d", a * b); break;
        default: printf("Invalid Choice");
    }
    return 0;
}
