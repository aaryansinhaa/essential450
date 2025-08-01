#include <iostream>
#include <vector>
using namespace std;

void sortArray(vector<int> &arr) {
  int c0 = 0, c1 = 0, c2 = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 0) {
      c0++;
    }
    if (arr[i] == 1) {
      c1++;
    }
    if (arr[i] == 2) {
      c2++;
    }
  }

  for (int i = 0; i < arr.size(); i++) {
    if (c0 > 0) {
      arr[i] = 0;
      c0--;
    } else if (c1 > 0) {
      arr[i] = 1;
      c1--;
    } else if (c2 > 0) {
      arr[i] = 2;
      c2--;
    }
  }
}

int main(int argc, char *argv[]) {
  vector<int> arr = {0, 1, 2, 0, 1, 2, 2, 1};
  sortArray(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << " " << arr[i];
  }
  return 0;
}
