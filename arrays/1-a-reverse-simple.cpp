#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr) {
  int n = arr.size();
  vector<int> temp(n);
  for (int i = 0; i < n; i++) {
    temp[i] = arr[n - i - 1];
  }

  for (int i = 0; i < n; i++) {
    arr[i] = temp[i];
  }
}

int main() {
  vector<int> input = {1, 2, 3, 4, 5, 6};
  reverseArray(input);
  for (int i = 0; i < input.size(); i++) {
    cout << " " << input[i];
  }
  return 0;
}
