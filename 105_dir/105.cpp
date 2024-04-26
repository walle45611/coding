#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    vector<vector<int>> buildings;
    int Li, Hi, Ri;

    while(cin >> Li >> Hi >> Ri) {
        buildings.push_back({Li, Hi, Ri});
    }

    vector<pair<int,int>> events;
    for(auto &b : buildings){
        events.push_back({b[0],b[1]});
        events.push_back({b[2],-b[1]});
    }

    sort(events.begin(),events.end());

    vector<int> skyline;
    multiset<int> heights; 
    int current_height = 0;

    for(auto &event:events){
        int x = event.first;
        int h = event.second;

        if(h>0){
            if (h > current_height){ 
                skyline.push_back(x);
                skyline.push_back(h);
                current_height = h;
            }
            heights.insert(h);
        }
        else {
            heights.erase(heights.find(-h)); 
            if (-h == current_height) {
               current_height = heights.empty() ? 0 : *heights.rbegin(); 
                skyline.push_back(x);
                skyline.push_back(current_height);
            }
        }
    }

    for(int i = 0; i < skyline.size(); ++i) {
        cout << skyline[i];
        if(i != skyline.size() - 1) cout << " ";
    }

    return 0;
}

