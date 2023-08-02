#include<iostream>
using  std::cout,std::endl,std::string;
class Human{
    public:

    string name;
    int age;

   Human(string naav, int vay) {
        this->name = naav;
        this->age = vay;
    }
    void printInfo(){
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;

    }

};

void sum(int a, int b){
    cout<<"The sum is:"<<a+b<<endl;
}