#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size -1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
void bubbleSortDown(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size -1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] < array[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

int task1() {
    int arr[12] = { 5, 2, 9, 1, 5, 6, 7, 3, 8, 0, 4, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, size);

    cout << "Array sorted in ascending order: ";
    for (int i = 0; i < 12; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSortDown(arr, size);

    cout << "Array sorted in descending order: ";
    for (int i = 0; i < 12; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int task2() {

    int arr[] = { 3, -5, 1, -2, 7, -8, 4, 9, -1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);  
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int main()
{


    task1();

    // task2();
}
