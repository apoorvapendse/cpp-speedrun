#include<iostream>
using std::cout,std::endl,std::string;

class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

void insertNode(Node* root,int data,int pos){
    //0 means left, 1 means right
    Node* temp = new Node(data);
    if(pos==1){
        if(root->right!=NULL){
            cout<<"Right root already has a child"<<endl;
            return;
        }
        root->right = temp;
        
    }
    else{
        if(root->left!=NULL){
            cout<<"Right root already has a child"<<endl;
            return;
        }
        root->left = temp;
    }

}