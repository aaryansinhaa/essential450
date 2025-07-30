#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int findKMin(vector<int> &arr, int k) {
  sort(arr.begin(), arr.end());
  return arr[k - 1];
}

int findKMax(vector<int> &arr, int k) {
  sort(arr.begin(), arr.end());
  return arr[arr.size() - k];
}

int main(int argc, char *argv[]) {
  vector<int> arr = {1, 3, 2, 4, 6, 5, 7};
  int kMax = findKMax(arr, 1);
  int kMin = findKMin(arr, 1);
  cout << "kMin: " << kMin << " kMax: " << kMax;

  return 0;
}
