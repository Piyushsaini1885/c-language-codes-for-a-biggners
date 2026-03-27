#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top=NULL;

void push(int x) {
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}

void pop() {
    if(top==NULL) return;

    struct node *temp=top;
    top=top->next;
    free(temp);
}

void display() {
    struct node *temp=top;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main() {
    push(10); push(20); push(30);
    pop();
    display();
    return 0;
}