#include <iostream>

int tack5() {
    int x, acamulator, sum = 0;
    std::cout << "Введіть значення x: ";
    std::cin >> x; //1234

    while (x > 0) {

        acamulator = x % 10;

        x /= 10;

        if (acamulator % 2 == 0)
        {
            sum *= acamulator;
        }

    }

    std::cout << "відповідь " << sum << std::endl;

    return sum;


}

int main()
{
    tack5();

    /*
    Блок схема
    https://drive.google.com/file/d/10uHNI8GY8ygH5SGzA1sMchYYaKs8AhA-/view?usp=sharing
    
    */

}

