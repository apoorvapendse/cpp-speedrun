#include <iostream>
#include <climits>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

// Node* insertLevelOrder(Node* root,int index,int* arr,int arrSize){
//     if(index < arrSize){
//         Node* temp =  new Node(arr[index]);
//         root = temp;
//        root->left =   insertLevelOrder(root->left,2*index+1,arr,arrSize);
//        root->right =   insertLevelOrder(root->right,2*index+2,arr,arrSize);
//     }
//     return root;
// }

void insertNode(int data, int pos, Node *root)
{
    if (pos == 0)
    {
        root->left = new Node(data);
    }
    if (pos == 1)
    {
        root->right = new Node(data);
    }
    if (pos == -1)
    {
        // means this is a leaf node, so do nothing
        return;
    }
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int findHeight(Node *root, int& currHeight)
{
    if (root == NULL)return 0; 

    int leftHeight = findHeight(root->left, currHeight);
    int rightHeight = findHeight(root->right, currHeight);

    currHeight = 1 + max(leftHeight, rightHeight);

    return currHeight;
}
int findNodeCount(Node* root){
   if(root==NULL){return 0;}
    int totalNodes=0 ;
//find nodes for left subtree and find nodes for right subtree;
totalNodes+=findNodeCount(root->left);
totalNodes+=findNodeCount(root->right);
return 1+totalNodes;

}

int findLeafNodeCount(Node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left == NULL && root->right==NULL){return 1;}

    int leftLeadNodes = findLeafNodeCount(root->left);
    int rightLeafNodes = findLeafNodeCount(root->right);
    return leftLeadNodes + rightLeafNodes;
}

int findMinNode(Node* root, int& minval) {
    if (root == NULL) {
        return INT_MAX; 
    }
    
    int leftMin = findMinNode(root->left, minval);
    
    if (root->data < minval) {
        minval = root->data;
    }
    
    int rightMin = findMinNode(root->right, minval);
    
    return min(minval, min(leftMin, rightMin));
}
int findMaxNode(Node* root, int& maxval) {
    if (root == NULL) {
        return INT_MIN; // Return a large value to represent no maximum found
    }
    
    int leftMax = findMaxNode(root->left, maxval);
    
    if (root->data > maxval) {
        maxval = root->data;
    }
    
    int rightMax = findMaxNode(root->right, maxval); // Corrected recursive call
    
    return max(maxval, max(leftMax, rightMax));
}

void printLeadNodes(Node* root){
    if(!root){
        return;
    }
    printLeadNodes(root->left);
    printLeadNodes(root->right);
    if(root->left==NULL && root->right ==NULL){
        cout<<root->data<<" ";
    }
}

void printLevelWise(Node* root){
    if(root==NULL){return;}
    
    queue<Node*> myQueue;
    myQueue.push(root);
    while(myQueue.empty()==false){
        Node* temp = myQueue.front();
        cout<<temp->data<<" ";
        myQueue.pop();
        if(temp->left){
            myQueue.push(temp->left);
        }
        if(temp->right){
            myQueue.push(temp->right);
        }
        
    }
    
    

}
int main()
{

    /*
           12
         /   \
       14    19
       /\     / \
      4  99  124  122
                  / \
                55   66
     */

    Node *root = new Node(12);
    insertNode(14, 0, root);
    insertNode(19, 1, root);
    insertNode(4, 0, root->left);
    insertNode(99, 1, root->left);
    insertNode(122, 1, root->right);
    insertNode(124, 0, root->right);
    insertNode(55, 0, root->right->right);
    insertNode(66, 1, root->right->right);

    inorder(root);
    int max = 0;
    int height = findHeight(root,max);
    cout<<endl<<"Height of the tree:"<<height<<endl;  

    int totalNodes = findNodeCount(root);
    cout<<endl<<"total nodes in the tree:"<<totalNodes<<endl;

    int leafNodes = findLeafNodeCount(root);
    cout<<endl<<"total number of leaf nodes is:"<<leafNodes<<endl;


    int minVal = INT_MAX;
    int minNode = findMinNode(root,minVal);
    cout<<endl<<"The value of the node with min value is:"<<minNode<<endl;
    
    
    int maxval = INT_MIN;
    int maximum = findMaxNode(root, maxval);
    cout<<endl<<"The value of the node with max value is:"<<maximum<<endl;

    printLeadNodes(root);

    cout<<endl;
    cout<<"Levelwise:"<<endl;
    printLevelWise(root);
}
