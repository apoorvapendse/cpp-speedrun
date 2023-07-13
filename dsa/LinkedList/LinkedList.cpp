#include <iostream>
using std::cout, std::endl, std::string;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

   
};


 void insertAtHead(Node *&head, int data)
    {
        Node *temp = new Node(data); // new keyword will create Node in heap memory and not writing new will create node in stack
        if (head == NULL)
        {
            head = temp;
            return;
        }
        temp->next = head;
    }
    void insertAtTail(Node *&head, int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
            return;
        }
        Node *tempHead = head;

        while (tempHead->next != NULL)
        {

            tempHead = tempHead->next;
        }

        tempHead->next = temp;
    }

    void printList(Node *&head)
    {
        if (head == NULL)
        {
            cout << endl;
            cout << "List is empty"  << endl;
            return;
        }
        
        Node *temphead = head;
        cout << endl;
        while (temphead != NULL)
        {
            cout << temphead->data << " ";
            temphead = temphead->next;
        }
        cout << endl;
    }




int main(){
    Node* head = NULL;
    insertAtHead(head,12);
    insertAtTail(head,2);
    insertAtTail(head,5);
    insertAtTail(head,9);
    printList(head);
    
}