#include<iostream>
using std::cout,std::endl,std::string;

class Employee{
    public:
    static int employeeCount ;
    protected://can only be accessed by children
    string name;
    int age;
    string company;

    public:
   Employee(string naav, int vay,string org) {
        this->name = naav;
        this->age = vay;
     this->company = org;
        employeeCount++;  

    }
    int getEmployeeCount(){
        return Employee::employeeCount;
    }
    void printInfo(){
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Company:"<<company<<endl;;

    }
   
    virtual void jobDescription(){

    };//must be defined in the inherited class
    virtual void work(){}//you have to work if you are employee, hence the function is virtual :-)
};


class Developer:public Employee{
    private:
    int salary = 100;
    string framework ;
    public:

    Developer(string name,string org, int age,string framework)
    :Employee(name,age,org)//calling Employee class contructor after colon
    {
        
        this->framework = framework;

    }
    public:
    //overriding the virtual function
   virtual void jobDescription() override{
        cout<<"The person works on "<<framework<<endl;
    }

    int getSalary(){
        return salary;
    }
    void work(){
        cout<<name<<" is writing code in "<<framework<<endl;
    }
};

int Employee::employeeCount = 0;


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
    void work(){
        cout<<name<<" is desigining UI in "<<software<<endl;
    }
};

int main(){
    Designer natasha = Designer("natasha","spap",20,"FIGMA");
    Developer appu = Developer("appu","spap",19,"Next");

    //The most common use of polymorphism is when a parent class reference is used to refer to a child class object
    Employee *emp1 = &appu;
    Employee *emp2 = &natasha;

   //to access static members, we use the scope resolution operator

    appu.jobDescription();

    cout<<"The total employees are "<<Employee::employeeCount;

    
   
   //note: we can only access the overriden VIRTUAL methods when we use parent class reference to refer to a child class object
}