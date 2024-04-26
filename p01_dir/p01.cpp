#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string data;
    vector<int> lastIndex(256, -1); 
    int max_len = 0;
    int start = 0;

    cin >> data;

    for (int i = 0; i < data.size(); i++) {
        if (lastIndex[data[i]] != -1) {
            start = max(start, lastIndex[data[i]] + 1); 
        }
        max_len = max(max_len, i - start + 1);
        lastIndex[data[i]] = i;
    }

    cout << max_len;

    return 0;
}

