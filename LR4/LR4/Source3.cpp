#include <iostream>

int main()
{
    bool answer = false;
    int value;



    std::cout << "Enter value: ";

    std::cin >> value;

    if (value >= 0 && value < 10) {

        answer = true;
    }
    if (value * 2 < 20 && value - 2 > -2) {
        answer = true;
    }
    if (value - 1 > 1 && value / 2 < 10) {
        answer = true;
    }

    std::cout << (answer ? "that's true" : "that's not true");


    return 0;
}