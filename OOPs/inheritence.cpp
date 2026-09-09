#include <iostream>
using namespace std;

class Human {
public:
  int height;
  int weight;
  int age;

  int getage() { return age; }
  void setweight(int n) { this->weight = n; }
};

class Male : public Human {
  public:
    int lenght;
    void attact(){
      cout<<"attact"<<endl;
    }
};

int main() {
}
