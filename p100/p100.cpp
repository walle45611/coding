#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

bool judge(int i) {
    return (i % 2 == 0);
}

int main() {
    int a, b;
    list<int> result;

    cin >> a >> b;

    for (int i = a; i <= b; ++i) {
        int count = 0;
        int num = i;
        while (num != 1) {
            if (judge(num)) {
                num /= 2;
            } else {
                num = 3 * num + 1;
            }
            count += 1;
        }
        count += 1; 
        result.push_back(count);
    }

    auto max = max_element(result.begin(), result.end());
    cout << a << " " << b << *max;

    return 0;
}

