#include<iostream>

using  std::cout,std::endl,std::string;
class Employee{
    protected://can only be accessed by children
    string name;
    int age;
    string company;

    public:
   Employee(string naav, int vay,string org) {
        this->name = naav;
        this->age = vay;
        this->company = org;
    }
    void printInfo(){
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Company:"<<company<<endl;;

    }
    virtual void jobDescription(){

    };//must be defined in the inherited class

};

void sum(int a, int b){
    cout<<"The sum is:"<<a+b<<endl;
}