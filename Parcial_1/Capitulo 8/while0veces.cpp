#include <iostream>

int main()
{
    int count { 15 };
    while(count < 10)
    {
        std::cout<<count<<' ';
        ++count;
    }
    std::cout<<"Terminamos!";

    return 0;
}