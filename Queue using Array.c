#include <stdio.h>
#define MAX 5

int q[MAX], front=0, rear=-1;

int main() {
    q[++rear]=10;
    q[++rear]=20;
    printf("%d", q[front++]);
    return 0;
}

