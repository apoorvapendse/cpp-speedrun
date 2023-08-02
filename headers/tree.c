#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node* left;
    struct node* right;

};

struct node* createNode(struct node* root,int data){
    root = (struct node*)malloc(sizeof(struct node));
    root->data = data;root->left = NULL,root->right = NULL;
    return root;
}

struct node* insertLevelOrder(struct node* root, int* arr,int index,int arrSize){

    if(index<arrSize){
        struct node* temp = createNode(temp,arr[index]);
        root = temp;

        root->left = insertLevelOrder(root->left,arr,2*index+1,arrSize);
        root->right = insertLevelOrder(root->right,arr,2*index+2,arrSize);
    }
    return root;
}

void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);


}

void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void postorder(struct node* root){
    if(root==NULL){return;}
    //left right root
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}


