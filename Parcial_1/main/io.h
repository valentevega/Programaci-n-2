#include <iostream>
#ifndef IO_H
#define IO_H

int readNumber()
{
    int z;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> z;
    return z;
}

void writeAnswer(int n)
{
    std::cout << "La suma es: " << n << "\n";
}

#endif