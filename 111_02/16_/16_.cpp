#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    getline(cin, line);  
    istringstream iss(line);
    map<int, int> counts;
    int number;

    while (iss >> number) {
        counts[number]++;
    }

    int n = counts.size();  
    n = line.size() / 2;  

    for (const auto& p : counts) {
        if (p.second == n) {
            cout << p.first << "\n";
            break;  
        }
    }

    return 0;
}

