//system header files are defined as below
#include <iostream>
//whereas user defined header files are created using #include "xyz.h"
// #include "myfile.h";

int a = 99;//a is a global variable
using namespace std;
int main()
{

cout<<(1 and 0)<<endl;
int a = 12;
cout<<"printing local a:"<<a<<endl;
cout<<"printing global a:"<<::a<<endl;;//we use scope resolution operator to access the global var
}