#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head=NULL;

void insertEnd(int val) {
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;

    if(head==NULL)
        head=newnode;
    else {
        struct node* temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newnode;
    }
}

void display() {
    struct node* temp=head;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main() {
    insertEnd(5);
    insertEnd(15);
    display();
}