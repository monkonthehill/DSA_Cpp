#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target) {
  int rows = matrix.size();
  int colms = matrix[0].size();
  int rowIndex = 0;
  int colmIndex = colms - 1;
  while (rowIndex < rows && colmIndex >= 0) {
    if (matrix[rowIndex][colmIndex] == target) {
      return true;
    }
    if (matrix[rowIndex][colmIndex] > target) {
      rowIndex++;
    }
    if (matrix[rowIndex][colmIndex] < target) {
      colmIndex--;
    }
  }
  return false;
}
