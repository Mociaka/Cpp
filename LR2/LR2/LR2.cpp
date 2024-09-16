// LR2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cmath>

int function(int x) {
    if (x <= 0) {
        return x * x - sin(x);
    }
    if (x > 0) {

        return pow(x, 1.0 / 2) + cos(x);
    }
}

bool function2(double x, double y) {
    if ((x >= -1.0 && x <= 0.0) && (y >= 0.0 && y <= 1)) {
        return true;
    }
    if ((x >= 0 && x <= 1) && (y >= -1 && y <= 0)) {
        return true;
    }
    return false;
    
}

int main()
{
    
    int x;
    std::cin >> x;
    std::cout << function(x) <<std::endl;
    
    //std::cout << function2(1, -0.5) << std::endl;
}


