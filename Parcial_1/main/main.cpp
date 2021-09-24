#include <iostream>
#include "io.h"

void writeAnswer(int n);
int readNumber();
 
int main ()
{
    int x {readNumber() + readNumber()};
    writeAnswer(x);
    return 0;
}