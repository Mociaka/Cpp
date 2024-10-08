// LR3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<windows.h>

int function1(int i) {
    int N;
    std::cout << "input: ";
    std::cin >> N;


    int a = N / 100;    
    int b = (N / 10) % 10; 
    int c = N % 10;        

    int sum = 0;

    if (a > 2 && a % 2 != 0) {
        sum += a;
    }
    if (b > 2 && b % 2 != 0) {
        sum += b;
    }
    if (c > 2 && c % 2 != 0) {
        sum += c;
    }

    return sum;
}


int function2() {
    int busNumber;

    std::cout << "Введіть номер автобуса (1-7): ";
    std::cin >> busNumber;

    int stops;

    switch (busNumber) {
    case 1:
        stops = 10;
        break;
    case 2:
        stops = 12;
        break;
    case 3:
        stops = 8;
        break;
    case 4:
        stops = 15;
        break;
    case 5:
        stops = 9;
        break;
    case 6:
        stops = 11;
        break;
    case 7:
        stops = 14;
        break;
    default:
        std::cout << "Автобус з таким номером не існує!" << std::endl;
        return 0;
    }


    std::cout << "Автобус №" << busNumber << " має " << stops << " зупинок." << std::endl;

    return 0;
}
bool function3(double x, double y) {
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

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << function1(321) <<std::endl;

    function2();

    std::cout << function3(1.5, 5.0) << std::endl;

    
}




