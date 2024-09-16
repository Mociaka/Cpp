// LR3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int functionF(int i) {
    int first = i % 1000;
    first /= 100;

    int second = i % 100;
    second /= 10;

    int third = i % 10;
    third /= 1;

    int c = 0;

    if (first >2 && first %2 ==1)
    {
        c += first;
    }
    if (second > 2 && second % 2 == 1)
    {
        c += second;
    }
    if (third > 2 && third % 2 != 1)///sdfasfasf
    {
        c += third;
    }


    return c;
}

int main()
{
    std::cout << functionF(321) <<std::endl;    
   //std::cout << ((2 % 2) != 1);
}
