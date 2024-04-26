#include<bits/stdc++.h>

using namespace std;

void merge_sort_recursion(vector<int>& a, int l, int r);
void merge_sorted_arrays(vector<int>& a, int l, int m, int r);

int main()
{
  vector<int> array = { 9, 4, 8, 1, 7, 0, 3, 2, 5, 6};

  merge_sort_recursion(array, 0, array.size() - 1);

  for (int i = 0; i < array.size(); i++)
    cout << array[i] << " ";
  cout << endl;

  return 0;
}

void merge_sort_recursion(vector<int>& a, int l, int r)
{
  if (l < r)
  {
    int m = l + ((r - l) >> 1);

    merge_sort_recursion(a, l, m);
    merge_sort_recursion(a, m + 1, r);
    merge_sorted_arrays(a, l, m, r);
  }
}

void merge_sorted_arrays(vector<int>& a, int l, int m, int r)
{
  int left_length = m - l + 1;
  int right_length = r - m;

  vector<int> temp_left(left_length);
  vector<int> temp_right(right_length);
  int i, j, k;

  for (i = 0; i < left_length; i++)
    temp_left[i] = a[l + i];

  for (i = 0; i < right_length; i++)
    temp_right[i] = a[m + 1 + i];

  for (i = 0, j = 0, k = l; k <= r; k++)
  {
    if ((i < left_length) &&
        (j >= right_length || temp_left[i] <= temp_right[j]))
    {
      a[k] = temp_left[i];
      i++;
    }
    else
    {
      a[k] = temp_right[j];
      j++;
    }
  }
}

