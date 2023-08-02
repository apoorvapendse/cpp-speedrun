#include<iostream>

using std::cout,std::endl,std::string;
using std::cin;

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
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);


}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){return;}
    //left right root
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main(){

Node* root =NULL;
int n;
cout<<"enter the total number of nodes you want to insert in the tree in level order manner:"<<endl;
cin>>n;

int *arr = (int*)malloc(sizeof(int)*n-1);
//inputting the array;
for(int i = 0 ; i < n ;i++){
    cout<<"Enter the value for "<<i<<" index"<<endl;
    cin>>arr[i];
}
root = insertLevelOrder(root,arr,0,n);
cout<<"Inorder Traversal:"<<endl;
inorder(root);
cout<<endl;
cout<<"PreOrder Traversal:"<<endl;
preorder(root);
cout<<endl;
cout<<"PostOrder Traversal:"<<endl;
postorder(root);
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