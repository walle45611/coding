#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  double x1, y1, x2, y2, x3, y3, x4, y4;
  vector<pair<double,double>> result;
  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
    map<pair<double, double>, double> coord_count;
    coord_count[{x1, y1}]++;
    coord_count[{x2, y2}]++;
    coord_count[{x3, y3}]++;
    coord_count[{x4, y4}]++;

    vector<pair<double ,double>> diff_coords;
    pair<double,double> same_coord;
    bool same_found = false;

    for (const auto& item : coord_count) {
      if (item.second == 2 && !same_found) {
        same_coord = item.first;
        same_found = true;
      } else if (item.second == 1) {
        diff_coords.push_back(item.first);
      }
    }

    result.push_back({diff_coords[0].first + diff_coords[1].first - same_coord.first, diff_coords[0].second + diff_coords[1].second - same_coord.second});
  }

  cout.precision(3);
  for(auto i = 0;i<result.size(); i++){
    cout << fixed << result[i].first << " " << fixed << result[i].second;
    if(i != result.size() - 1) cout << "\n";
  }

  return 0;
}

