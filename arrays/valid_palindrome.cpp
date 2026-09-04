// A phrase is a palindrome if, after converting all uppercase letters into
// lowercase letters and removing all non-alphanumeric characters, it reads the
// same forward and backward. Alphanumeric characters include letters and
// numbers.
//
// Given a string s, return true if it is a palindrome, or false otherwise.
//
//
//
// Example 1:
//
// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:
//
// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:
//
// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric
// characters. Since an empty string reads the same forward and backward, it is
// a palindrome.
//
#include <iostream>
#include <string>
using namespace std;

bool is_Valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

char change_cases(char ch)
{
    if (ch <= 'Z' && ch >= 'A')
    {
        ch = ch - 'A' + 'a';
        return ch;
    }
    else
    {
        return ch;
    }
}

bool check_palindrome(string s)
{
    string temp  = "";
    int    start = 0;
    int    end   = temp.length() - 1;
    // removing unneccesary characters
    for (int i = 0; i < s.length(); i++)
    {
        if (is_Valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    // make the cases smaller
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = change_cases(temp[j]);
    }
    while (start <= end)
    {
        if (change_cases(temp[start]) != change_cases(temp[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    string str = "A man, a plan, a canal: Panama";
    if (check_palindrome(str) == true)
    {
        cout << "Valid palindrome";
    }
    else
    {
        cout << "Invalid palindrome";
    }
}
