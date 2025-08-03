#include <iostream>
#include <set>
#include <vector>
using namespace std;

int secondLargest(vector<int> &arr) {
  set<int> newArray;
  for (auto x : arr) {
    newArray.insert(x);
  }
  if (newArray.size() < 2) {
    return *newArray.end();
  } else {
    auto it = newArray.end();
    it--;
    it--;
    return *it;
  }
  return -1;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {12, 35, 1, 10, 34, 1};
  int secondLargestNumber = secondLargest(arr);
  cout << secondLargestNumber;
  return 0;
}
