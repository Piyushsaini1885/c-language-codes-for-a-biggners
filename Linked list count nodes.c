#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *temp;
    int count=0;

    head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;

    temp = head;
    while(temp!=NULL) {
        count++;
        temp = temp->next;
    }

    printf("Nodes = %d", count);
    return 0;
}
