#include <iostream>
using std::cout;
using std::endl;
using std::string;

// everything in cpp classes is private by default
// private varaibles and methods can only be accessed within the class;

class Car
{
public:
    int numberPlate;
    int age;
    float price;
    string brand;

    // default constructor;(has to be defined if you have already declared parameterised constructor)
    Car()
    {
    }
    // parameterised constructor

    Car(int number, int age, float cost, string brand)
    {
        cout << "Constructor is called" << endl;
        this->numberPlate = number;
        this->age = age;
        this->price = cost;
        this->brand = brand;
    }

    void introduction()
    {
        cout << "The car numbered " << numberPlate << " costs around " << price << endl;
    }
};

int main()
{
    Car maruti = Car(100, 4, 120000, "Suzuki");
    maruti.introduction();

    // we can also create an object like below, which is very inefficient
    Car bmw;
    bmw.age = 1;
    bmw.numberPlate = 1221;
    bmw.brand = "bmw";
    bmw.price = 6000000;
    bmw.introduction();


}
