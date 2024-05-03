#include <iostream>
#include <unordered_set>
using namespace std;

bool isHappy(int n) {
	unordered_set<int> seen;
	while (n != 1) {
		int sum = 0;
		while (n > 0) {
			int digit = n % 10;
			sum += digit * digit;
			n /= 10;
		}
		if (seen.find(sum) != seen.end()) {
			return false;
		}
		seen.insert(sum);
		n = sum;
	}
	return true;
}

int main() {
	int T;
	cin >> T;
	for (int i = 1; i <= T; ++i) {
		int originalN;
		cin >> originalN;
		if (isHappy(originalN)) {
			cout << "Case #" << i << ": " << originalN << " is a Happy number." << "\n";
		} else {
			cout << "Case #" << i << ": " << originalN << " is an Unhappy number." << "\n";
		}
	}
	return 0;
}

