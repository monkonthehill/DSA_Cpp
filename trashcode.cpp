#include <array>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  array<int, 4> a{1, 2, 4, 5};
  int size = a.size();
  for (int i = 0; i <= size; i++) {
    cout << a[i];
  }
  // at function;
  cout << "Element at 3rd index is =" << a.at(3) << endl;
  // empty function is used to check weather the array is empty or not;
  cout << "Is array enpty =" << a.empty() << endl;
  // front funtion is used to cout the first element of the array
  cout << "The first element of the array is :" << a.front() << endl;
  // back funtion is used to cout the final element of the array;
  cout << "The last element of the array is :" << a.back() << endl;
  // vector
  vector<int> v;
  cout << "capacity ->" << v.capacity() << endl;
  // capacity is the real capacity of the vector while size is the number of
  // elements present in the vector; wheneever we insert new element in the
  // vector it doubles its size we use push back funtion to enter the element
  v.push_back(8);
  v.push_back(7);
  v.push_back(2);
  v.push_back(4);
  int size_of_vector = v.size();
  for (int i = 0; i <= size; i++) {
    cout << v[i] << ", ";
  }
  // how to initialize a vector
  vector<int> v1(5, 1);
  // here the n in the vactor is the size of the vector and x is the element
  // which would be filled initially;

  int size_v1 = v1.size();
  cout << "v1 has these elements :";
  for (int i = 0; i <= size; i++) {
    cout << " " << v1[i];
  }
}
