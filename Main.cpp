#include <iostream>
using namespace std;

long long a, b, mod;

long long res(long long a, long long b) {
  if(b == 0)
    return 1;
  a %= mod;
  long long ans = 1;
  if(b % 2 == 1)
    ans = a;
  long long small = res(a, b / 2);
  ans = (ans * small) % mod;
  ans = (ans * small) % mod;
  return ans;
}

int main() {

  cin >> a >> b >> mod;
  cout << res(a, b) << '\n';

}