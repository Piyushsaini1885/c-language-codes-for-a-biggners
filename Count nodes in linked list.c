#include <stdio.h>

struct node {
    int data;
    struct node* next;
};

struct node* head=NULL;

int count() {
    int c=0;
    struct node* temp=head;

    while(temp!=NULL) {
        c++;
        temp=temp->next;
    }
    return c;
}