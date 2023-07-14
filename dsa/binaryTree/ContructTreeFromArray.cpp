#include<iostream>

using std::cout,std::endl,std::string;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertLevelOrder(Node* root, int* arr,int index,int arrSize){

    if(index<arrSize){
        Node* temp = new Node(arr[index]);
        root = temp;

        root->left = insertLevelOrder(root->left,arr,2*index+1,arrSize);
        root->right = insertLevelOrder(root->right,arr,2*index+2,arrSize);
    }
    return root;
}
void inorder(Node* root){
    if(root==NULL){return;}
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){

Node* root =NULL;
int arr[] = {1,2,3,4,5,6,7,8};
root = insertLevelOrder(root,arr,0,8);
inorder(root);
     /*  
              1
            /   \
           2     3
          / \    / \
         4  5  6   7
        /
       8
 */
}