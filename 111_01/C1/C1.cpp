#include<bits/stdc++.h>

using namespace std;

vector<bool> sieve(int max_num) {
  vector<bool> is_prime(max_num + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i * i <= max_num; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j <= max_num; j += i)
        is_prime[j] = false;
    }
  }
  return is_prime;
}

vector<int> generatePrimeList(const vector<bool>& is_prime) {
  vector<int> primes;
  for (size_t i = 2; i < is_prime.size(); i++) {
    if (is_prime[i]) {
      primes.push_back(i);
    }
  }
  return primes;
}

int main() {
  vector<bool> is_prime = sieve(32768);
  vector<int> primes = generatePrimeList(is_prime);

  int n, first = 1;
  while (cin >> n && n != 0) {
    if (!first) {
      cout << "\n";
    }
    first = 0;  // After the first output, this will be set to 0.
    int count = 0;
    for (auto i = 0; i < primes.size() && primes[i] <= n / 2; i++) {
      int p1 = primes[i];
      int p2 = n - p1;
      if (p2 >= p1 && p2 <= 32768 && is_prime[p2]) {
        count++;
      }
    }
    cout << count;
  }

  return 0;
}

