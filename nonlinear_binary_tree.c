#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

int main() {
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    struct TreeNode* leftChild = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    struct TreeNode* rightChild = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    
    root->data = 50;
    root->left = leftChild;
    root->right = rightChild;
    
    leftChild->data = 30;
    leftChild->left = NULL;
    leftChild->right = NULL;
    
    rightChild->data = 70;
    rightChild->left = NULL;
    rightChild->right = NULL;
    
    printf("Binary Tree Structure:\n");
    printf("Root: %d\n", root->data);
    printf("Left Child: %d\n", root->left->data);
    printf("Right Child: %d\n", root->right->data);
    
    free(root);
    free(leftChild);
    free(rightChild);
    
    return 0;
}
