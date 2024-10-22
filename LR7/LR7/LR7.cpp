#include <iostream>

int task2_6() {
    int c0, steps = 0;

    std::cout << "Enter a natural number: ";
    std::cin >> c0;

    if (c0 <= 0) {
        std::cout << "The number must be a natural number greater than 0." << std::endl;
        return 1;
    }

    while (c0 != 1) {
        std::cout << c0 << std::endl; 

        if (c0 % 2 == 0) {
            c0 = c0 / 2; 
        }
        else {
            c0 = 3 * c0 + 1; 
        }

        steps++; 
    }

    std::cout << c0 << std::endl; 
    std::cout << "steps = " << steps << std::endl;
}

using namespace std;

int task2_7() {
    double pi4 = 0.;
    long n;
    cout << "Number of iterations: ";
    cin >> n;
    
    for (long i = 0; i < n; i++) {
        
        if (i % 2 == 0) {
            pi4 += 1.0 / (2 * i + 1);  
        }
        else {
            pi4 -= 1.0 / (2 * i + 1);  
        }
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}

int task3() {
    int l;
    cout << "Number of iterations: ";
    cin >> l;

    if (l < 1 || l > 25)
    {
        cout << "Error: The value must be between 1 and 25." << endl;
        return -1;
    }

    cout << '+';
    for (int i = 0; i < l-2; i++)
        cout << '-';
    cout << '+' << endl;
    for (int i = 0; i < l-2; i++) {
        cout << '|';
        for (int j = 0; j < l-2; j++)
            cout << ' ';
        cout << '|' << endl;
    }
    cout << '+';
    for (int i = 0; i < l-2; i++)
        cout << '-';
    cout << '+' << endl;
    return 0;

}

int main()
{
    //task2_6();
    //task2_7();
    task3();
}

