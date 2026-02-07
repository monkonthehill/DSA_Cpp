#include <iostream>
#include <utility>
#include <vector>
using namespace std;
void print(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void reverse_array(vector<int> &arr) {
  int start = 0, end = arr.size() - 1;
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  cout << "Original array =";
  print(arr);
  cout << "Reversed array =";
  reverse_array(arr);
  print(arr);
}
