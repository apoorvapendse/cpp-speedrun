#include<iostream>
using std::cout,std::endl,std::string;

class Person{
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
};



int main(){
    Person appu = Person("apoorva",17);//here constructor will act as our setter, but cannot directly set or access the vars
    // appu.age = 18;this line will throw error as our variables are private;
    appu.printInfo();
    appu.setName("ganesh");
    cout<<appu.getName();
}
