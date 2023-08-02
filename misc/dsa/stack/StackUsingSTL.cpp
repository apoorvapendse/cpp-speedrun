#include <iostream>
#include <stack>
using std::cout, std::endl, std::stack;

int main()
{
    // declaring the stack
    stack<int> s;
    s.push(12);
    s.push(9);
    s.push(18);

    cout << "element at top is: " << s.top() << endl;

    s.pop();
    cout << "element at top is: " << s.top() << endl;

    s.push(15);
    s.push(29);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    cout<<endl;
}
