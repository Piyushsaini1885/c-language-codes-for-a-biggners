#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *newnode;
    head = NULL;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 10;
    newnode->next = NULL;
    head = newnode;

    printf("%d", head->data);
    return 0;
}
