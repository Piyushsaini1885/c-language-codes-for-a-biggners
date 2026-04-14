#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* top=NULL;

void push(int x) {
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}

void pop() {
    if(top==NULL)
        printf("Empty\n");
    else {
        struct node* temp=top;
        printf("Popped=%d\n",temp->data);
        top=top->next;
        free(temp);
    }
}

int main() {
    push(10);
    push(20);
    pop();
    return 0;
}