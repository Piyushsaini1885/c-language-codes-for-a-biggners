#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *front=NULL, *rear=NULL;

void insert(int x) {
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;

    if(rear==NULL)
        front=rear=newnode;
    else {
        rear->next=newnode;
        rear=newnode;
    }
}

void delete() {
    if(front==NULL)
        printf("Empty\n");
    else {
        struct node* temp=front;
        printf("Deleted=%d\n",temp->data);
        front=front->next;
        free(temp);
    }
}

int main() {
    insert(5);
    insert(15);
    delete();
    return 0;
}