#include <stdio.h>

int stack[100], top=-1;

void push(int x) {
    top++;
    stack[top] = x;
}

int main() {
    push(10);
    push(20);
    push(30);

    for(int i=0;i<=top;i++)
        printf("%d ", stack[i]);

    return 0;
}