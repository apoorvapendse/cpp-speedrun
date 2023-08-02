#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to perform iterative inorder traversal
void inorderTraversal(struct TreeNode* root) {
    if (root == NULL) return;

    struct TreeNode* stack[1000]; //create an array called stack of type TreeNode
    int top = -1;
    struct TreeNode* current = root;

    while (current != NULL || top != -1) {
       
        while (current != NULL) {
            stack[++top] = current;
            current = current->left;
        }

        // Backtrack to the parent node
        current = stack[top--];

        // Process the current node
        printf("%d ", current->val);

        // Move to the right subtree
        current = current->right;
    }
}
void preorderTraversal(struct TreeNode* root) {
    if (root == NULL) return;

    struct TreeNode* stack[1000]; // Assuming the tree won't have more than 1000 nodes
    int top = -1;
    struct TreeNode* current = root;

    while (current != NULL || top != -1) {
        // Process the current node
        while (current != NULL) {
            printf("%d ", current->val);
            stack[++top] = current;
            current = current->left;
        }

        // Backtrack to the parent node
        current = stack[top--];

        // Move to the right subtree
        current = current->right;
    }
}
void postorderTraversal(struct TreeNode* root) {
    if (root == NULL) return;

    struct TreeNode* stack1[1000]; // Assuming the tree won't have more than 1000 nodes
    struct TreeNode* stack2[1000];
    int top1 = -1, top2 = -1;
    struct TreeNode* current = root;

    stack1[++top1] = current;

    while (top1 != -1) {
        current = stack1[top1--];
        stack2[++top2] = current;

        if (current->left != NULL)
            stack1[++top1] = current->left;
        if (current->right != NULL)
            stack1[++top1] = current->right;
    }

    while (top2 != -1) {
        current = stack2[top2--];
        printf("%d ", current->val);
    }
}

int main() {
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    free(root->left->right);
    free(root->left->left);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
