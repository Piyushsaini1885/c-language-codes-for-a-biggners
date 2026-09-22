#include <stdio.h>

int stack[100], top=-1;

void push(int x) {
    if(top==99)
        printf("Overflow\n");
    else
        stack[++top]=x;
}

void pop() {
    if(top==-1)
        printf("Underflow\n");
    else
        printf("Popped=%d\n",stack[top--]);
}

void display() {
    for(int i=top;i>=0;i--)
        printf("%d ",stack[i]);
}

int main() {
    push(10);
    push(20);
    display();
    pop();

    return 0;
}