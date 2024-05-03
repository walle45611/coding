#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; ++i) {
		vector<int> nums;
		int num;
		while (cin >> num) {
			nums.push_back(num);
		}
		cin.ignore(); 

		sort(nums.rbegin(), nums.rend()); 

		cout << nums[0] << " " << nums[1] << endl;
	}

	return 0;
}

