#include <algorithm>
#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    }
    if (arr[mid] < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}
int main() {
  // elements should be in monotonic order;
  int even[6] = {2, 4, 7, 8, 13, 15};
  int odd[5] = {1, 3, 4, 6, 7};
  int evenindex = binary_search(even, 6, 13);
  cout << "Index of 18 is" << evenindex << endl;
}
