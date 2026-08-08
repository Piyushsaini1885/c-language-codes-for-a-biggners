#include <stdio.h>

void preorder(struct node* root) {
    if(root!=NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}