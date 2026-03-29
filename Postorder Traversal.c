#include <stdio.h>

void postorder(struct node* root) {
    if(root!=NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}