#include <stdio.h>

int stack[100], top=-1;

void push(int x) {
    stack[++top] = x;
}

void pop() {
    if(top==-1)
        printf("Stack Underflow\n");
    else
        printf("Popped = %d\n", stack[top--]);
}

int main() {
    push(10);
    push(20);
    pop();

    return 0;
}