// Given an array nums, return true if the array was originally sorted in
// non-decreasing order, then rotated some number of positions (including zero).
// Otherwise, return false.
//
// There may be duplicates in the original array.
//
// Note: An array A rotated by x positions results in an array B of the same
// length such that B[i] == A[(i+x) % A.length] for every valid index i.
//
//
//
// Example 1:
//
// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 2 positions to begin on the element of value
// 3: [3,4,5,1,2]. Example 2:
//
// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.
// Example 3:
//
// Input: nums = [1,2,3]
// Output: true
// Explanation: [1,2,3] is the original sorted array.
// You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
//
//
// Constraints:
//
// 1 <= nums.length <= 100
// 1 <= nums[i] <= 100
#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &arr) {
  int drop = 0;
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    if (arr[i] > arr[(i + 1) % n]) {
      drop++;
    }
  }
  if (drop > 1) {
    return false;
  } else {
    return true;
  }
}
void print_array(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main() {
  vector<int> nums = {3, 4, 5, 1, 2};
  cout << "The array is :";
  print_array(nums);
  if (check(nums) == true) {
    cout << "True";
  } else {
    cout << "False";
  }
  check(nums);
  return 0;
}
