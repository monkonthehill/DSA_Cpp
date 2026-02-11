
#include <iostream>
using namespace std;
int lenght(int size, char arr[]) {
  int count = 0;
  int i = 0;
  while (i < size) {
    if (arr[i] == '\0') {
      break;
    } else {
      count++;
    }
    i++;
  }
  return count;
}
int main() {
  int size = 10;
  char arr[size];
  cout << "Enter a string :\n";
  cin >> arr;
  cout << "lenght of the array is =";
  cout << lenght(size, arr);
  return 0;
}
