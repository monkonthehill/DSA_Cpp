#include <iostream>
#include <utility>
using namespace std;

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j + 1], arr[j]);
      }
    }
  }
}
void printarray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
int main() {
  int arr[5] = {11, 3, 7, 9, 10};
  int n = 5;
  bubble_sort(arr, n);
  printarray(arr, n);
}
