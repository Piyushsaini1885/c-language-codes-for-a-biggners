#include <stdio.h>

int main() {
    char op;
    int a, b;
    scanf("%c %d %d", &op, &a, &b);

    switch(op) {
        case '+': printf("%d", a + b); break;
        case '-': printf("%d", a - b); break;
        case '*': printf("%d", a * b); break;
        case '/': printf("%d", a / b); break;
        default: printf("Invalid Operator");
    }
    return 0;
}
