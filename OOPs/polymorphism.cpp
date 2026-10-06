#include <iostream>
#include <ostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Generic animal sound !!" << endl;
    }
};

class Dog : public Animal {
public:
    virtual void speak() override {
        cout << "Wuff Wuff!!" << endl;
    }
};

int main() {
    Animal* myAnimal = new Dog;
    myAnimal->speak();
    cout << "Hello world";
    delete myAnimal;
    return 0;
}
