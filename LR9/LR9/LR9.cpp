#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void task3() {
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];

    cout << "Initial array: " << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 - 50;
    }
    printArray(arr, SIZE);

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    int max = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = max;

    cout << "Modified array (max and min swapped): " << endl;
    printArray(arr, SIZE);
}

void task4() {
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];

    cout << "Initial array: " << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 - 50;
    }
    printArray(arr, SIZE);

    int aNum;
    cout << endl << "Enter a number: ";
    cin >> aNum;

    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > aNum) {
            count++;
        }
    }

    cout << "Number of elements greater than " << aNum << ": " << count << endl;
}

void task5() {
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];

    cout << "Initial array: " << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 5;
    }
    printArray(arr, SIZE);

    int maxInt = arr[0], secondMaxInt = -1;
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > maxInt) {
            secondMaxInt = maxInt;
            maxInt = arr[i];
        }
        else if (arr[i] > secondMaxInt && arr[i] != maxInt) {
            secondMaxInt = arr[i];
        }
    }

    if (secondMaxInt == -1) {
        cout << "There is no second maximum element, all elements are the same." << endl;
    }
    else {
        cout << "The second largest element: " << secondMaxInt << endl;
    }
}

void task6() {
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];

    cout << "Initial array: " << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 20 - 10;
    }
    printArray(arr, SIZE);

    int zeroPos = -1;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == 0) {
            zeroPos = i;
            break;
        }
    }

    if (zeroPos == -1) {
        cout << "The array does not contain any zeros." << endl;
    }
}

int main() {

    // task3();

    // task4();

    task5();

    // task6();
}
