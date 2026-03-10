#include <stdio.h>

int queue[100];
int front=-1, rear=-1;

void insert(int x) {
    if(front==-1) front=0;
    rear++;
    queue[rear]=x;
}

int main() {
    insert(5);
    insert(10);
    insert(15);

    for(int i=front;i<=rear;i++)
        printf("%d ",queue[i]);

    return 0;
}