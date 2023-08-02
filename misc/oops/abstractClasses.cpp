#include<iostream>
using std::string,std::cout,std::endl;

//ONE LINE SUMMARY
//VIRTUAL FUNCTIONS AND ABSTRACT METHODS ARE THE SAME THING!!!
//any class that contains virtual function becomes an abstract class

//exactly similar to interfaces in java where you have to define the abstract props and methods;
class abstractEmployee{
    virtual void work() = 0;//this is pure virtual function, meaning you have to define it exactly similar to abstract methods

};

// here Employee class is inheriting abstractEmployee class, so it will have to override the virtual function in absEmp
class Person : abstractEmployee
{
    //we have to define work() function before creating an object of this class , or we will get errors
    private:
    string name;
    int age;

    public:
    Person(string naav, int vay){
        this->name = naav;
        this->age  = vay;
    }
    Person(){
        cout<<"Default constructor is called"<<endl;
    }

    void printInfo(){
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
    }
    void setName(string naav){
        if(age<18){
        cout<<"You are too young to change your name,come back later"<<endl;
        return;
        }
        name = naav;
    }
    void setAge(int age){
        age = age;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    void work(){
        cout<<"employee is working..."<<endl;
    }
};

int main(){
    Person appu = Person("appu",19);
    Person ganesh = Person("ganesh",19);
    appu.work();
    ganesh.work();
}