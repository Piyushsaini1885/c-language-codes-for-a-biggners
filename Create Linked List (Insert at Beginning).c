#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void display() {
    struct node *temp = head;
    while(temp!=NULL) {
        printf("%d ", temp->data);
        temp=temp->next;
    }
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
    return 0;
}
