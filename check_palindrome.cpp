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

bool isAlpha(char c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isDigit(char c) { return (c >= '0' && c <= '9'); }

char toLowerCase(char c) {
  if (c >= 'A' && c <= 'Z')
    return c + ('a' - 'A');
  return c;
}

bool checkPalindrome(const vector<char> &str) {
  int s = 0;
  int e = str.size() - 1;

  while (s < e) {
    if (str[s] != str[e])
      return false;
    s++;
    e--;
  }
  return true;
}

int main() {
  vector<char> arr;
  char v;

  cout << "Enter the string: ";

  while (cin.get(v) && v != '\n') {
    if (isAlpha(v) || isDigit(v)) {
      arr.push_back(toLowerCase(v));
    }
  }

  if (checkPalindrome(arr))
    cout << "Palindrome\n";
  else
    cout << "Not Palindrome\n";

  return 0;
}
