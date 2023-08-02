#include<iostream>
#include "../headerExperiment/employee.h"
using std::cout;


class Developer:public Employee{
    private:
    int salary = 100;
    string framework ;
    public:

    Developer(string name,string org, int age,string framework)
    :Employee(name,age,org)//calling Employee class after colon
    {
        
        this->framework = framework;

    }
    public:
    //overriding the virtual function
    void jobDescription(){
        cout<<"The person works on "<<framework<<endl;
    }

    int getSalary(){
        return salary;
    }
};


class Designer:public Employee{

    public:
    string software;

    Designer(string name,string org, int age, string software):Employee(name,age,org)
    {
        this->software = software;
    }

    void jobDescription(){
        cout<<name<<" works as a designer at "<<this->company;
    }
};

int main(){
    Developer appu = Developer("appu","spap",19,"react");
    appu.printInfo();

    Designer ganesh = Designer("ganesh","spap",24,"FIGMA");
    ganesh.printInfo();
    ganesh.jobDescription();

}