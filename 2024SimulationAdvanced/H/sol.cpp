#include <bits/stdc++.h>

using namespace std;

int main() {
    string time;
    while (true) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cin >> time;
        if (time == "0:00") {
            break;
        }

        int hour = stoi(time.substr(0, time.find(":")));
        int minute = stoi(time.substr(time.find(":") + 1));

        double hour_angle = (hour % 12 + minute / 60.0) * 30;
        double minute_angle = minute * 6;

        double angle_diff = fabs(hour_angle - minute_angle);
        double min_angle = fmin(angle_diff, 360 - angle_diff);

        cout << fixed << setprecision(3) << min_angle << endl;
    }

    return 0;
}
