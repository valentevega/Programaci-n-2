#include <iostream>

int main()
{
    std::cout << "Ingrese un entero: ";
    int x{};
    std::cin >> x;

    std::cout << "Ingrese otro entero: ";
    int y{};
    std::cin >> y;

    std::cout << "El residuo es: " << x % y << "\n";

    if ((x % y) == 0)
        std::cout << x << " es uniformemente divisible por " << y << "\n";
    else
        std::cout << x << " no es uniformemente divisible por " << y << "\n";

    return 0;    
}