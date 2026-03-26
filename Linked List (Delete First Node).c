#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert(int x) {
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=head;
    head=newnode;
}

void delete() {
    if(head==NULL)
        return;

    struct node *temp=head;
    head=head->next;
    free(temp);
}

void display() {
    struct node *temp=head;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main() {
    insert(1); insert(2); insert(3);
    delete();
    display();
    return 0;
}