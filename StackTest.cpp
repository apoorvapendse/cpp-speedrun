//testing whether we can use .cpp file as header file;

#include<iostream>
#include "dsa/stack/Stack.cpp" 
int main(){
    Stack* s = new Stack(4);
    s->push(12);
    s->push(13);
    s->push(14);
    s->push(15);

    s->printStack();

    s->pop();

    s->printStack();
}

//Yes, we can