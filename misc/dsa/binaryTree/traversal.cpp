#include<iostream>
#include "./BinaryTree.cpp"



void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);


}

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){return;}
    //left right root
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}

int main(){
    Node* root = new Node(5);
    insertNode(root,12,0);
    insertNode(root,8,1);
    insertNode(root->left,19,0);
    insertNode(root->left,22,1);
    insertNode(root->right,15,1);

    //tree would look something like this;
//         5
//        /  \
//       12   8
//       / \    \
//    19    22    15

    postorder(root);


}