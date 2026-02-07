#include <iostream>
#include <vector>
using namespace std;
void mergeArray(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
  int i = 0, j = 0, k = 0;
  while (i < arr1.size() && j < arr2.size()) {
    if (arr1[i] < arr2[j]) {
      arr3[k] = arr1[i];
      i++;
      k++;
    } else {
      arr3[k] = arr2[j];
      j++;
      k++;
    }
  }
  while (j < arr2.size()) {
    arr3[k] = arr2[j];
    j++;
    k++;
  }
  while (i < arr1.size()) {
    arr3[k] = arr1[i];
    i++;
    k++;
  }
}
void print(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main() {
  vector<int> arr1 = {1, 3, 5, 7, 9};
  vector<int> arr2 = {2, 4, 6, 8};
  vector<int> arr3(arr1.size() + arr2.size());
  cout << "First array is : ";
  print(arr1);
  cout << "Second array is : ";
  print(arr2);
  cout << "Third merged sorted array will be : ";
  mergeArray(arr1, arr2, arr3);
  print(arr3);
}
