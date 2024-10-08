#include <iostream>
#include <iomanip>



using namespace std;

int main() {


    std::cout << std::fixed << std::setprecision(1) << 2.345 << std::endl;
    std::cout << std::fixed << std::setprecision(2) << 2.345 << std::endl;
    std::cout << std::fixed << std::setprecision(6) << 2.34523343 << std::endl;
    std::cout << std::fixed << std::setprecision(2) << 2.345 << std::endl;
    std::cout << std::fixed << std::setprecision(0) << 2.345 << std::endl;
}