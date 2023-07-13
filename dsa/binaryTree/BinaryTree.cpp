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


void printRightTree(Node* root){
    //we will be having a copy of the root here;
    cout<<&root;//a copy of root pointer is made, but this copy still points to the same data;S
    root->data = 88;
    while(root!=NULL){
        cout<<root->data<<endl;
        root=root->right;
        
    }
}


int main(){
    Node* root = new Node(12);
        /*   root
            /  \
        NULL    NULL */

    root->left = new Node(14);
    /*       12
            /  \
          14    NULL 
         /  \    
      null   null
          */

    root->right = new Node(16);
    printRightTree(root);
    cout<<&root;



}