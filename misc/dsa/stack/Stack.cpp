#include <iostream>

using std::cout, std::endl;
//implementing stack using array;


class Stack
{
public:
    int size;
    int top;
    int *arr;

    Stack(int size)
    {
        this->top = -1;
        this->size = size;
        this->arr = new int(size);
    }

    bool isFull(){
        if(this->top+1 == this->size){
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if(this->top==-1){
            return true;
        }
        return false;
    }

    void push(int data)
    {
        if(this->isFull()){
            cout<<"Cannot push, Stack is already full"<<endl;;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
        cout<<"Pushed:"<<this->arr[this->top]<<endl;


    }

    void pop(){
        if(this->isEmpty()){
            cout<<"cannot pop from empty stack"<<endl;
            return;
        }

        cout<<"popping: "<<this->arr[this->top]<<endl;
        this->top--;
    }

    void printStack(){
        if(this->isEmpty()){
            cout<<"cannot print empty stack"<<endl;
            return;
        }

        cout<<"Printing stack from top to bottom:";
        for(int i = this->top ; i>= 0;i--){
            cout<<this->arr[i]<<" ";
        }
        cout<<endl;

    }
    int peek(){
        if(this->isEmpty()){
            cout<<"Stack is empty, cannot print top element"<<endl;
            return -99;
        }
       

        return this->arr[this->top];

        

    }
};


// int main(){
//     Stack* s = new Stack(5);
//     s->push(12);
//     s->push(15);
//     s->push(18);

//     s->printStack();

//     s->pop();
//     s->printStack();

// }