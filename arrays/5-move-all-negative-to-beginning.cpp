#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void moveNumbers(vector<int> &arr) {
  int left = 0;
  int right = arr.size() - 1;
  while (left < right) {
    while (left < right && arr[left] < 0) {
      left++;
    }
    while (right > left && arr[right] > 0) {
      right--;
    }
    if (right > left) {
      swap(arr[left], arr[right]);
      left++;
      right--;
    }
  }
}

int main(int argc, char *argv[]) {
  vector<int> arr = {1, -2, 3, -4, 5, -6};
  moveNumbers(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
