// The std::list in C++ is a Standard Template Library (STL) container that
// implements a doubly linked list. It stores elements in non-contiguous memory
// locations, and each element (node) holds pointers to both the next and
// previous elements in the sequence
#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> l;
  l.push_back(1);
  l.push_front(2);
  for (int i : l) {
    cout << "i" << " ";
  }
  cout << endl;
  // l.erase(l.begin());
  list<int> n(l); // used to copy a list to a new list ;
}
