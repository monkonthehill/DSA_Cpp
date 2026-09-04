#include <cstring>
#include <iostream>
#include <string>
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

  // copy constructor;
  //  Hero(Hero &any){
  //    cout<<"copy called";
  //    this->health = any.health;
  //    this->name = any.name;
  //  }
};

int main() {
  Hero wolf;
  wolf.set_health(60);

  char name[10] = "nitish \n";
  wolf.set_name(name);

  wolf.print_details();

  cout << endl;

  // use default copy constructor
  Hero tiger(wolf);
  tiger.print_details();

  // change the name of wolf
  wolf.name[0] = 'R';
  wolf.print_details();

  // but if we now prints tiger its name will also be changed
  tiger.print_details();

  /*
  60
  nitish


  60
  nitish

  60
  Ritish

  60
  Ritish

  this is because default copy constructor uses shallow copy which means same
  adress is being used for both of the hero which cause this problem to prevent
  this we use deep copy

  */
}
