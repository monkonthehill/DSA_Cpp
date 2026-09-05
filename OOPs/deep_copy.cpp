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

  // copy constructor;
  //  Hero(Hero &any){
  //    cout<<"copy called";
  //    this->health = any.health;
  //    this->name = any.name;
  //  }
  Hero(Hero &any) {

    // we create a seprate array for name instead of using the same adress
    char *temp = new char[strlen(any.name) + 1];
    strcpy(temp, any.name);
    this->name = temp;

    cout << "copy called \n";
    this->health = any.health;
  }
  //Distructor 
  ~Hero(){
    cout<<"Distructor called"<<endl;
  }
};

int main() {
  // default copy constructor uses shallow copy which means same
  //   adress is being used for both of the hero which cause this problem to
  //   prevent this we use deep copy

  Hero wolf;
  wolf.set_health(60);

  char name[10] = "nitish \n";
  wolf.set_name(name);

  wolf.print_details();

  cout << endl;

  // use custom copy constructor
  Hero tiger(wolf);
  tiger.print_details();

  // change the name of wolf
  wolf.name[0] = 'R';
  wolf.print_details();

  // but if we now prints tiger its name will also be changed
  tiger.print_details();

  wolf = tiger;

  wolf.print_details();

  tiger.print_details();
}
