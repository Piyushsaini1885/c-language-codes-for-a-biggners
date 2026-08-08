#include <stdio.h>

void inorder(struct node* root) {
    if(root!=NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}