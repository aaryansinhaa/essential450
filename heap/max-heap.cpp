#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;

class MaxHeap {
  int *arr;
  int size;       // total elements inside the heap
  int total_size; // total size of the array

public:
  MaxHeap(int n) {
    arr = new int[n];
    size = 0;       // number of elements at start is zero.
    total_size = n; // this will serve as the maximum element in a heap.
  }

  // insertion
  void insert(int value) {
    if (size >= total_size) {
      cout << "Heap Full!";
      return;
    }

    arr[size] = value;
    int index = size;
    size++;

    // compare it with it's parent
    while (index > 0 && arr[(index - 1) / 2] < arr[index]) {
      swap(arr[index], arr[(index - 1) / 2]);
      index = (index - 1) / 2;
    }

    cout << arr[index] << " Inserted at: " << index;
    cout << endl;
  }

  // print the heap
  void print() {
    for (int i = 0; i < total_size; i++) {
      cout << " " << arr[i];
      cout << endl;
    }
  }

  // delete the top element of a heap
  void Delete() {
    if (size <= 0) {
      cout << "Heap is already empty!";
      return;
    }
    cout << arr[0] << " is being deleted" << endl;
    arr[0] = arr[size - 1];
    size--;

    if (size == 0) {
      return;
    }

    Heapify(0);
  }
  // heapify is a simple rule to ensure that all nodes are at the correct place!
  void Heapify(int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    // largest will store the index of the element which is greater than the
    // left and right child.
    if (left < size && arr[left] > arr[largest]) {
      largest = left;
    }

    if (right < size && arr[right] > arr[largest]) {
      largest = right;
    }

    if (largest != index) {
      swap(arr[index], arr[largest]);
      Heapify(largest);
    }
  }
};

int main(int argc, char *argv[]) {
  MaxHeap H1(6);
  H1.insert(10);
  H1.insert(12);
  H1.insert(0);
  H1.insert(5);
  H1.insert(8);
  H1.insert(9);

  H1.print();

  H1.Delete();
  H1.Delete();
  H1.print();
  H1.insert(500);
  H1.insert(20);
  H1.Delete();
  H1.print();

  return 0;
}
