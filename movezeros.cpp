// 283. Move Zeroes
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given an integer array nums, move all 0's to the end of it while maintaining
// the relative order of the non-zero elements.
//
// Note that you must do this in-place without making a copy of the array.
//
//
//
// Example 1:
//
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:
//
// Input: nums = [0]
// Output: [0]
//
//
// Constraints:
//
// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1
//
//
// Follow up: Could you minimize the total number of operations done?

#include <iostream>
#include <utility>
#include <vector>
using namespace std;
void movezeros(vector<int> &arr) {
  int i = 0;

  for (int j = 0; j < arr.size(); j++) {
    if (arr[j] != 0) {
      swap(arr[j], arr[i]);
      i++;
    }
  }
}

void print(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main() {
  vector<int> arr = {0, 1, 0, 3, 12};
  cout << "Before moving Zeroes = ";
  print(arr);
  cout << "After moving Zeroes = ";
  movezeros(arr);
  print(arr);
}
