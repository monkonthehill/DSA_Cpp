// In C++, the const keyword is a type qualifier that stands for "constant". It
// tells the compiler that an entity is immutable (read-only) and cannot be
// modified after its initialization

#include <iostream>
using namespace std;

void print_anything(const int &num2) { cout << num2; }

class Player {
private:
  int score = 0;

public:
  void addPoint() { score++; }           // Non-const function (modifies state)
  int getScore() const { return score; } // Const function (read-only)
};

int main() {
  // learn how const is used in case of normal veriable
  const int number = 1;

  // trying to reassign it
  //  number = 2;
  // 1. Cannot assign to variable 'number' with const-qualified type 'const int'
  // [typecheck_assign_const]

  // other operation works perfectly

  // Now we will observe how const works for pointers
  int num2 = 10;
  const int *p = &num2;
  // cout << *p << " " << num2;

  // *p = 3;
  // 1. Read-only variable is not assignable [typecheck_assign_const]

  // if we use const pointer then
  int *const p1 = &num2;

  *p1 = 3;
  cout << *p1;
  // we can do this but what we can't do is
  // p1 = &number;
  // 1. Cannot assign to variable 'p1' with const-qualified type 'int *const'
  // [typecheck_assign_const]
  //    const.cpp:27:3: Variable 'p1' declared const here

  // now what if pointer and the variable its pointing to are both const
  const int *const p2 = &number;
  // *p2 = 100;
  // p2 = &num2;
  // both of these operation are invalid

  // how const behave it functions
  print_anything(num2);
  // Fast pass-by-reference that guarantees zero modifications

  Player regularplayer;
  regularplayer.addPoint();
  int s = regularplayer.getScore();

  const Player constplayer;
  // constplayer.addPoint();
  // 1. 'this' argument to member function 'addPoint' has type 'const Player',
  // but function is not marked const [member_function_call_bad_cvr]
}
