#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head=NULL;

void reverse() {
    struct node *prev=NULL, *curr=head, *next;

    while(curr!=NULL) {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    head=prev;
}