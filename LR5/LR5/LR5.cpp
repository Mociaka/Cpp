#include <iostream>

int function1() {

    double x, y;
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter a value for x: ";
        std::cin >> x;

        y = pow(sin(x), 5) + fabs(5 * x - 1.5);

        std::cout << "For x = " << x << ", y = " << y << std::endl;
    }

    return 0;
}

int function2() {
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        int x = 0;
        std::cout << "Enter a natural number: ";
        std::cin >> x;
        std::cout << std::endl;

        if (x <= 0)
        {
            i--;
            continue;
        }

        sum += x * x;

    }

    std::cout << sum / 3.0;

    return 0;
}

int function3() {
    double a, b, h, x, y;

    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter h: ";
    std::cin >> h;

    if (a > b || h <= 0) {
        std::cout << "Error" << std::endl;
        return 1;  
    }

    std::cout << "-------------------------" << std::endl;
    std::cout << "  X        Y             " << std::endl;
    std::cout << "-------------------------" << std::endl;

    if (a < 0 ) {
        x = 0;
    }else{
        x = a;
    }
    
    
 
    while (x <= b) {
        
        if (x < 0) {
            std::cout << "Not in domain" << std::endl;
            break;
        }

       
        y = pow(x, 1.0 / 4) - 8 * sin(x);

        std::cout << x << "    " << y << std::endl;
        x += h;
    }

    std::cout << "-------------------------" << std::endl;
}

int tack5() {
    int x, acamulator , sum = 0; 
    std::cout << "Enter a value for x: ";
    std::cin >> x; //1234

    while (x>0) {

        acamulator = x % 10;

        x /= 10;

        if (acamulator %2==0)
        {
            sum += acamulator;
        }
         
    }

    std::cout << "Result " << sum << std::endl;

    return sum;

}

int main()
{


    //function1();

    // function2();

    function3();


    //tack5();

}
