#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> &arr) {
  int min = arr[0];
  for (int i = 0; i < arr.size(); i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }

  return min;
}

int findMax(vector<int> &arr) {
  int max = arr[0];
  for (int i = 0; i < arr.size(); i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  vector<int> input = {1, 2, 3, 4, 7, 5, 6};
  int min = findMin(input);
  int max = findMax(input);
  cout << "Min: " << min << " Max: " << max;
  return 0;
}
