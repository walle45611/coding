#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    vector<int> a = {2500,5000,2500};
    vector<int> b = {25,50,25};
    int n;
    while(cin >> n){
        int total = 0;
        int section, row, seat;
        bool found = false;
        for (section = 0; section < 3; ++section) {
            for (row = 1; row <= 100; ++row) {
                if (n > total && n <= total + b[section]) {
                    seat = n - total;
                    found = true;
                    break;
                }
                total += b[section];
            }
            if (found) break;
        }
        cout  << section + 1 << " " << row << " " << seat << "\n";
    }
    return 0;
}

