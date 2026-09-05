#include <cstring>
#include <iostream>

using namespace std;

class Hero {
private:
  int health;

public:
  char *name;

  void set_health(int health) { this->health = health; }
  void set_name(char name[100]) { strcpy(this->name, name); }
  int get_health() { return this->health; }
  string get_name() { return this->name; }

  void print_details() {
    cout << this->health << endl;
    cout << this->name << endl;
  }

  Hero() { name = new char[100]; }

  // destructor
  ~Hero() { cout << "destructor called" << endl; }
};

int main() {
  // if object is created statically the destructor is called automatically
  // whereas if the object is created dynamically me have to manually call the
  // destructor
  Hero wolf;

  Hero *tiger = new Hero;
  // this is how we manually calls the destructor
  delete tiger;
}
