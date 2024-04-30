#include<bits/stdc++.h>

using namespace std;

void sol(vector<int> numbers){
    vector<bool> visited(numbers.size(), false);
    vector<vector<int>> cycles;

    int count = 0; 

    while (count < numbers.size()) {
        int start_index = find(visited.begin(), visited.end(), false) - visited.begin();
        auto it = find(numbers.begin(), numbers.end(), start_index + 1);
        start_index = distance(numbers.begin(), it);

        vector<int> cycle;
        int current = start_index;
        do {
            cycle.push_back(numbers[current]);
            visited[current] = true;
            current = numbers[current] - 1;
            count++;
        } while (current != start_index);
        cycles.push_back(cycle);
    }

    cout << "[";
    for (int i = 0; i < cycles.size(); ++i) {
        if (i != 0) cout << ", ";
        cout << "[";
        for (int j = 0; j < cycles[i].size(); ++j) {
            if (j != 0) cout << ", ";
            cout << cycles[i][j];
        }
        cout << "]";
    }
    cout << "]";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string input;
        getline(cin, input);

        vector<int> numbers;
        regex num_regex("\\d+");
        smatch match;

        while (regex_search(input, match, num_regex)) {
            numbers.push_back(stoi(match[0]));
            input = match.suffix();
        }

        sol(numbers);
        cout << "\n";
    }
    return 0;
}

