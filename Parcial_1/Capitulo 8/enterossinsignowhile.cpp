#include <iostream>

int main()
{
    unsigned int count{10};

    while(count >=0)
    {
        if (count==0)
        {
            std::cout<<"ehrgwe goigh!";
        }
        else
        {
            std::cout<<count<<' ';
        }
        --count;
    }

    return 0;
}