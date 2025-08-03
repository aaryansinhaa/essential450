#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int subarraySum(vector<int> &arr) {
  int maxSum = arr[0];
  int sum = arr[0];
  for (int i = 1; i < arr.size(); i++) {

    sum = max(arr[i], sum + arr[i]);
    maxSum = max(maxSum, sum);
  }

  return maxSum;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {5, -3, 7, 6, 5};
  int maxSum = subarraySum(arr);
  cout << maxSum << endl;
  return 0;
}
