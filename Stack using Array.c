#include <stdio.h>
#define MAX 5

int stack[MAX], top=-1;

int main() {
    stack[++top]=10;
    stack[++top]=20;
    printf("%d", stack[top--]);
    return 0;
}
