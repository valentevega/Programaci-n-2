#include <iostream>

struct Fraccion
{
    int numerador;
    int denominador;
};

double multiplicar(Fraccion frac1,Fraccion frac2)
{
    int num,denom;
    double result;
    num = fracc1.numerador * frac2.numerador;
    denom = fracc1.denominador * frac2.denominador;
    result = num/denom;
    return result;
}

int main()
{
    Fraccion fraccion1;
    Fraccion fraccion2;

    std::cout<<"Multiplicacion de fraciones\n";
    std::cout<<"Inserta el numerador de la fraccion 1: ";
    std::cin>>frac1.numerador;
    std::cout<<"Inserta el denominador de la fraccion 1: ";
    std::cin>>frac1.denominador;
    std::cout<<"Ahora el numerador de la fraccion 2: ";
    std::cin>>frac2.numerador;
    std::cout<<"Y el denominador de la fraccion 2: ";
    std::cin>>frac2.denominador;
    std::cout<<"El resultado de la multiplicacion de ambas fracciones es: "<<multiplicar(frac1,frac2);
}