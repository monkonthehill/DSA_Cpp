#include <iostream>
using namespace std;
//------single inheritence---------//

class Human {
public:
  int height;
  int age;
  void amb(){cout<<"human Iam ambigous!! "<<endl;}
  void speak() { cout << "speaking" << endl; }
};

class X : public Human {};

//--------------------------------//

//------multilevel inheritence---------//

class Y : public Human {};
class Z : public Y {};

//--------------------------------//

class Animal {
public:
  int height;
  int age;
  void bark() { cout << "speaking" << endl; }
  void amb(){cout<<"animal Iam ambigous!! "<<endl;}
};

//------multiple inheritence---------//

class Chimp : public Human, public Animal {};

//--------------------------------//

int main() {
  X x;
  x.speak();

  Z z;
  z.speak();

  Chimp ch;
  ch.speak();
  ch.bark();
  //this will through error due to ambigous function;
  // ch.amb();
  ch.Human::amb();
  ch.Animal::amb();
}
