// Problem statement
// You are given a string 'str'. Your task is to check whether the string is
// palindrome or not. For checking palindrome, consider alphabets and numbers
// only and ignore the symbols and whitespaces.
//
// Note :
//
// String 'str' is NOT case sensitive.
// Example :
//
// Let str =  “c1 O$d@eeD o1c”.
// If we ignore the special characters, whitespaces and convert all uppercase
// letters to lowercase, we get str = “c1odeedo1c”, which is a palindrome.
// Hence, the given string is also a palindrome. Detailed explanation (
// Input/output format, Notes, Images )

#include <iostream>
#include <vector>
using namespace std;
bool checkpalindrome(vector<char> &str) {
  int s = 0;
  int e = str.size() - 1;
  while (s < e) {
    if (str[s] != str[e]) {
      return false;
    }
    s++;
    e--;
  }
  return true;
}
int main() {
  vector<char> arr;
  char v;
  cout << "Enter the string to check weather it is a palindrome or not :";

  while (cin.get(v) && v != '\n') {
    if (v != ' ')
      arr.push_back(v);
  }

  cout << "\n";
  if (checkpalindrome(arr) == true) {
    cout << "The string is palindrome !!";
  } else {
    cout << "The string is not a palindrome !!";
  }
}
