#include <iostream>
#include <iterator> // std::size

int main()
{
    int array[]{ 1, 1, 2, 3, 5, 8, 13, 21};
    std::cout << "El arreglo tiene: " << std::size(array) << " elementos\n";
    
    return 0;
}