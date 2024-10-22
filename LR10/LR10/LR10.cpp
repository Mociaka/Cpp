#include <iostream>

using namespace std;

int task1() {
    const int m = 4;  
    const int n = 3;  
    int array[m][n];  

    srand(time(NULL));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 - 50;
            std::cout << array[i][j] << " ";
        }
        std::cout <<  std::endl;
    }

    for (int i = 0; i < m; ++i) {
        int evenCount = 0;
        for (int j = 0; j < n; ++j) {
            if (array[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        std::cout << "Number of even numbers in row " << i + 1 << ": " << evenCount << std::endl;
    }

    return 0;
}

int task2() {
    const int m = 6; 
    const int n = 4;  
    int array[m][n]; 

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = std::rand() % 100 + 1;  
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int j = 0; j < n; ++j) {
        int evenCount = 0;
        for (int i = 0; i < m; ++i) {
            if (array[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        std::cout << "Number of even numbers in column " << j + 1 << ": " << evenCount << std::endl;
    }

    return 0;
}

int task3() {
    const int m = 5;
    const int n = 7;
    int array[m][n];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = std::rand() % 100 + 1;
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < m; ++i) {
        int sum = 0;  
        for (int j = 0; j < n; ++j) {
            sum += array[i][j];  
        }
        std::cout << "Sum of elements in row " << i + 1 << ": " << sum << std::endl;
    }

    return 0;
}

int task4() {
    const int m = 4;
    const int n = 6;
    int array[m][n];

    std::srand(static_cast<unsigned int>(std::time(0)));

    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = std::rand() % 100 + 1;
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    for (int j = 0; j < n; ++j) {
        int sum = 0;
        for (int i = 0; i < m; ++i) {
            sum += array[i][j];
        }
        std::cout << "Sum of elements in column " << j + 1 << ": " << sum << std::endl;
    }

    return 0;
}

int task5() {
    const int m = 3;
    const int n = 4;
    int array[m][n];

    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = std::rand() % 100 + 1;
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int maxElement = array[0][0];
    int maxRow = 0;
    int maxCol = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    std::cout << "Maximum element: " << maxElement << " (row " << maxRow + 1 << ", column " << maxCol + 1 << ")" << std::endl;

    return 0;
}

int task6() {
    const int m = 4;
    const int n = 7;
    int array[m][n];

    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = std::rand() % 100 + 1;  
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int minElement = array[0][0];
    int minRow = 0;
    int minCol = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (array[i][j] < minElement) {
                minElement = array[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    std::cout << "Minimum element: " << minElement << " (row " << minRow + 1 << ", column " << minCol + 1 << ")" << std::endl;

    return 0;
}

int task15() {
    const int m = 3;
    const int n = 3;
    int array[m][n];

    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = std::rand() % 100 + 1;
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < m; ++i) {
        mainDiagonalSum += array[i][i];             
        secondaryDiagonalSum += array[i][n - 1 - i];  
    }

    std::cout << "Sum of numbers on the main diagonal: " << mainDiagonalSum << std::endl;
    std::cout << "Sum of numbers on the secondary diagonal: " << secondaryDiagonalSum << std::endl;

    return 0;
}

int main() {


    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    task15();

}
