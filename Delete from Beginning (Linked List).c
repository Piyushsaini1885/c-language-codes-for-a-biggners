#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head=NULL;

void deleteBeg() {
    if(head==NULL)
        printf("Empty\n");
    else {
        struct node* temp=head;
        head=head->next;
        free(temp);
    }
}

int main() {
    deleteBeg();
}