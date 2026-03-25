#include <stdio.h>

int queue[100], front=-1, rear=-1;

void insert(int x) {
    if(front==-1) front=0;
    queue[++rear]=x;
}

void delete() {
    if(front>rear)
        printf("Queue Empty\n");
    else
        printf("Deleted = %d\n", queue[front++]);
}

int main() {
    insert(5);
    insert(10);
    delete();

    return 0;
}