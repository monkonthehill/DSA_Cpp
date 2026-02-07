#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;
void reverse_array(int n, vector<int> &arr) {
  int i = 0;
  int j = n - 1;
  while (i < j) {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
}
int main() {
  vector<int> arr = {1, 3, 8, 2, 6};
  int size = arr.size();
  cout << "initial array = ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << ", ";
  }
  cout << "Reversed array will be =";
  reverse_array(size, arr);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << ", ";
  }
}
