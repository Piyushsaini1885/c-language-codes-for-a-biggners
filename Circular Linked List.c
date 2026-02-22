#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *last = NULL;

void insert(int val) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;

    if(last == NULL) {
        last = newnode;
        last->next = last;
    } else {
        newnode->next = last->next;
        last->next = newnode;
        last = newnode;
    }
}

void display() {
    if(last == NULL) return;

    struct node *temp = last->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != last->next);
}