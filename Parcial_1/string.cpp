#include <string>
#include <iostream>

int main()
{
    std::cout << "Ingresa tu nombre completo: ";
    std::string nombre;
    std::cin >> nombre;
    std::cin.ignore();

    std::cout << "Ingresa tu edad: ";
    int edad{};
    std::cin >> edad;

    int prom{};
    int longitud{};
    longitud = nombre.length();
    prom = edad / longitud;

    std::cout << "Usted ha vivido: " << prom << " años por cada letra de su nombre";

}