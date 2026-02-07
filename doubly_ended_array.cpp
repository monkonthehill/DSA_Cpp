#include <deque>
#include <iostream>
using namespace std;

int main() {
  deque<int> d;
  d.push_back(1);
  d.push_front(4);
  // The push() function is used to insert a new element onto the top of the
  // stack. The pop() function is used to remove the element from the top of the
  // stack.
  //  d.pop_back();
  d.erase(d.begin(), d.end());
  // used to delete all elements in between f-l;
}
