#include <iostream>
#include <string>
using namespace std;

int longestAscendingSubstring(string s) {
    int n = s.length();
    if (n == 0) return 0;

    int maxLength = 0;
    int currentLength = 1;

    for (int i = 1; i < n; i++) {
        if ((islower(s[i]) && islower(s[i - 1]) && s[i] > s[i - 1]) || 
            (isupper(s[i]) && isupper(s[i - 1]) && s[i] > s[i - 1]) ||
            (isupper(s[i]) && islower(s[i - 1]) && tolower(s[i]) > tolower(s[i - 1]))) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    maxLength = max(maxLength, currentLength);

    return maxLength;
}

int main() {
    string s;
    cin >> s;

    int result = longestAscendingSubstring(s);
    cout << result << endl;

    return 0;
}

