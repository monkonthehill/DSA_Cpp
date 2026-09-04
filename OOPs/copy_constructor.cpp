#include <iostream>
#include <string>
using namespace std;

class Hero {
private:
  int health;

public:
  string name;

  void set_health(int health) { this->health = health; }
  void set_name(string name) { this->name = name; }
  int get_health() { return this->health; }
  string get_name() { return this->name; }

  void print_details() {
    cout << this->health << endl;
    cout << this->name << endl;
  }

  Hero(){ }

  //copy constructor;
  // Hero(Hero &any){
  //   cout<<"copy called";
  //   this->health = any.health;
  //   this->name = any.name;
  // }
};

int main() {
  Hero wolf;
  wolf.set_health(60);
  wolf.set_name("Hello wolf");
  wolf.print_details();

  cout<<endl;
  
  Hero tiger(wolf);
  tiger.print_details();

}
