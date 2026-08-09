#include <stdio.h>
#define SIZE 5

int queue[SIZE], front=-1, rear=-1;

void enqueue(int value) {
    if((rear+1)%SIZE == front)
        printf("Queue Full\n");
    else {
        if(front==-1) front=0;
        rear=(rear+1)%SIZE;
        queue[rear]=value;
    }
}

void dequeue() {
    if(front==-1)
        printf("Queue Empty\n");
    else {
        printf("Removed: %d\n", queue[front]);
        if(front==rear)
            front=rear=-1;
        else
            front=(front+1)%SIZE;
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    return 0;
}
