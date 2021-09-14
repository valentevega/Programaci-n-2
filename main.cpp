#include <iostream>
#include "input.cpp"

int main ()
{
    int x { getInteger() };
    int y { getInteger() };

    std::cout << x << " + " << y << " es " << x + y << "\n";
    return 0;

}