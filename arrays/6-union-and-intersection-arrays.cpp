#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> array_union(vector<int> &arr1, vector<int> &arr2) {
  vector<int> outputArr;
  set<int> set1;

  for (int i = 0; i < arr1.size(); i++) {
    set1.insert(arr1[i]);
  }
  for (int i = 0; i < arr2.size(); i++) {
    set1.insert(arr2[i]);
  }
  int i = 0;
  for (auto x : set1) {
    outputArr.push_back(x);
    i++;
  }
  return outputArr;
}

vector<int> array_intersection(vector<int> &arr1, vector<int> &arr2) {
  vector<int> outputArr;
  set<int> set1;

  for (int i = 0; i < arr1.size(); i++) {
    set1.insert(arr1[i]);
  }

  for (auto x : arr2) {
    if (set1.find(x) != set1.end()) {
      set1.insert(x);
    }
  }

  for (auto x : set1) {
    outputArr.push_back(x);
  }

  return outputArr;
}

int main() {
  vector<int> arr1 = {1, 2, 2, 3, 4, 5, 1};
  vector<int> arr2 = {1, 1, 1, 2, 3, 4, 5, 5, 3, 2, 6};
  vector<int> arr3 = array_union(arr1, arr2);
  vector<int> arr4 = array_intersection(arr1, arr2);
  cout << "Union:\n";
  for (auto i : arr3) {
    cout << i << " ";
  }
  cout << "\nIntersection\n";
  for (auto i : arr4) {
    cout << i << " ";
  }

  return 0;
}
