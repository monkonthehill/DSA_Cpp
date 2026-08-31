#include <cmath>
#include <iostream>
#include <vector>
int seiveOfEratosthenes(int n);
int main() {
  std::cout << "This program will calculate all of the prime numbers that are "
               "present between 0 to n!!\n";
  int n;
  std::cout << "enter the value of n :";
  std::cin >> n;
  std::cout << std::endl;
  int prime_numbers = seiveOfEratosthenes(n);
  std::cout << "The number of prime numbers between 0 to " << n
            << " are : " << prime_numbers;
}
int seiveOfEratosthenes(int n) {
  int count = 0;
  std::vector<bool> temp(n, true);
  temp[0] = temp[1] = false;
  for (int i = 0; i < n; i++) {
    if (temp[i] == true) {
      count++;
      for (int j = 2 * i; j < n; j = j + i) {
        temp[j] = false;
      }
    }
  }
  return count;
}
