#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int longestPalindromeSubstring(string data) {
    int n = data.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    int max_len = 0;

    for (int len = 1; len <= n; ++len) {
        for (int i = 0; i + len - 1 < n; ++i) {
            int j = i + len - 1;
            if (len == 1)
                dp[i][j] = 1;
            else if (len == 2)
                dp[i][j] = (data[i] == data[j]) ? 2 : 0;
            else
                dp[i][j] = (data[i] == data[j] && dp[i + 1][j - 1] != 0) ? len : 0;
            max_len = max(max_len, dp[i][j]);
        }
    }
    return max_len;
}

int main() {
    string data;
    cin >> data;

    int length = longestPalindromeSubstring(data);
    cout << length << endl;

    return 0;
}

