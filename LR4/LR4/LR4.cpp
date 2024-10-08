// Example program
#include <iostream>
#include <sstream> // Include this for string stream
#include <iomanip>

using namespace std;

int main() {

    std::string ip = "";
    int value;

    for (int i = 0; i < 4; i++) {
        std::cout << "Enter value (0-255): ";
        std::cin >> value;

        if (value < 0 || value > 255) {
            std::cout << "Invalid value. Please enter a value between 0 and 255." << std::endl;
            i--;
            continue;
        }

        std::ostringstream oss;
        oss << value;

        ip += oss.str();
        if (i < 3) {
            ip += ".";
        }
    }

    std::cout << ip;
}
Денис Моціяка, [24.09.2024 12:34]
// Example program
#include <iostream>

using namespace std;

int main(){
    double x,y;

    std::cout<<"Enter x: ";
    std::cin >> x;
    
    std::cout<<"Enter y: ";
    std::cin >> y;
    
    if(x/y == 1){
        std::cout<<"x is equal y ";
    }
    else{
        std::cout<<"x is not equal y ";
    }
}

Денис Моціяка, [24.09.2024 12:45]
// Example program
#include <iostream>
#include <sstream> // Include this for string stream
#include <iomanip>

using namespace std;

int main(){
    
    std::string ip = "";
    int value;

    for(int i =0; i <4; i++){
         std::cout << "Enter value (0-255): ";
        std::cin >> value;

        if (value < 0 || value > 255) {
            std::cout << "Invalid value. Please enter a value between 0 and 255." << std::endl;
            i--; 
            continue; 
        }

        std::ostringstream oss;
        oss << value;

        ip += oss.str();
        if (i < 3) {
            ip += ".";
        }
    }
    
     std::cout<<ip;
}