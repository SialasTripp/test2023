#include <iostream>
#include "display.h"

int main()
{
    std::cout << "Hello from Codespace\n";
    int array[5] = {1,2,3,4,5};
    displayArray(array,5);
    return 0;
}