// only use when the size of array is small:

#include <iostream>
#include <utility>
using namespace std;
void selection_sort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }
}
void printarray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
int main() {
  int arr[5] = {2, 4, 1, 5, 7};
  int n = 5;
  selection_sort(arr, n);
  printarray(arr, n);
}
