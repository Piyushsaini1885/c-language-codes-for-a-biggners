#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *temp;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;

    temp = head;
    while(temp!=NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}
