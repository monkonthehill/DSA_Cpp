// 189. Rotate Array
// Medium
// Given an integer array nums, rotate the array to the right by k steps, where
// k is non-negative.
//
//
//
// Example 1:
//
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:
//
// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation:
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]
//
#include <iostream>
#include <vector>
using namespace std;
void rotatearray(vector<int> &arr, int k) {
  int n = arr.size();
  vector<int> temp(n);
  // formula to rotate array is arr[(i + k) % n] = arr[i];
  for (int i = 0; i < arr.size(); i++) {
    temp[(i + k) % n] = arr[i];
  }
  // copy temp to original vector
  arr = temp;
}
void print_array(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> nums = {-1, -100, 3, 99};
  int k = 2;
  print_array(nums);
  cout << "the key was :" << k << endl;
  rotatearray(nums, k);
  cout << "the rotated array will be: ";
  print_array(nums);
  return 0;
}
