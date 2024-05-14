#include <iostream>
#include <ctime>

using namespace std;

int main() {
  int y = 2023;
  int n;
  cin >> n;
  while (n--) {
    int m, d;
    cin >> m >> d;
    tm timeinfo = {0, 0, 0, d, m - 1, y - 1900};
    time_t rawtime = mktime(&timeinfo);
    tm* timeptr = localtime(&rawtime);
    int weekday = timeptr->tm_wday;

    char weekdayName[10];
    strftime(weekdayName, sizeof(weekdayName), "%A", timeptr);
    cout << weekdayName << endl;
  }

  return 0;
}

