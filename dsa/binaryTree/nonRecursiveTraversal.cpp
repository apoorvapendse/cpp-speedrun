#include<iostream>
using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }


};

void insertLevelOrder(Node* root, int* arr,int index, int arrSize){
    if(root==NULL){return;}

    insertLevelOrder(root->left,arr,)

}


int main(){

    Node* root;



    int size;
    cout<<"enter the total nodes that will be present in the tree\n";

    cin>>size;
    int *arr = new int(size);
    for(int i = 0 ; i < size ;i++){
        cout<<"enter the element at index:"<<i<<endl;
        cin>>arr[i];
    }

    insertLevelOrder(root,arr,0,size);

}