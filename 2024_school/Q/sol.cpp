#include <bits/stdc++.h>

using namespace std;

int merge(vector<int> &arr, vector<int> &temp, int left, int mid, int right) {
  int i, j, k;
  int count = 0;

  i = left;
  j = mid + 1;
  k = left;

  while (i <= mid && j <= right) {
    if (arr[i] <= arr[j]) {
      temp[k++] = arr[i++];
    } else {
      temp[k++] = arr[j++];
      count += (mid - i + 1);
    }
  }

  while (i <= mid)
    temp[k++] = arr[i++];

  while (j <= right)
    temp[k++] = arr[j++];

  for (i = left; i <= right; i++)
    arr[i] = temp[i];

  return count;
}

int mergeSort(vector<int> &arr, vector<int> &temp, int left, int right) {
  int mid, count = 0;
  if (right > left) {
    mid = (right + left) >> 1;

    count += mergeSort(arr, temp, left, mid);
    count += mergeSort(arr, temp, mid + 1, right);
    count += merge(arr, temp, left, mid, right);
  }
  return count;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int a, n;
  cin >> a >> n;
  vector<int> aseq(a), curr(a);

  for (int i = 0; i < a; ++i) {
    curr[i] = i + 1;
  }

  while (n--) {
    int l, r;
    cin >> l >> r;
    vector<int> tmp(a);
    swap(curr[l - 1], curr[r - 1]);
    aseq = curr;
    long long count = mergeSort(aseq, tmp, 0, a - 1) ;
    cout << count << "\n";
  }

  return 0;
}

