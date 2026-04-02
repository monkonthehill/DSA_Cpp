#include <iostream>
using namespace std;

int countDistinctWays(long long nStairs) {
  if (nStairs < 0) {
    return 0;
  }
  if (nStairs == 0) {
    return 1;
  }
  int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
  return ans;
}
int main() {
  int n = 0;
  cout << " enter the number of stairs :";
  cin >> n;
  int ans = countDistinctWays(n);
  cout << ans;
  return 0;
}
