#include <string>
#include <iostream>

int main()
{
    cout<<"Ingresa tu nombre completo: ";
    string name;
    getline(cin,name);

    std::cout << "Ingrese su edad: ";
    int edad;
    std::cin >> edad;
    int letras;
    letras = name.length();

    double years;

    years = edad/letras;

    std::cout << "Ha vivido " << years << " años por cada letra de su nombre.";
}