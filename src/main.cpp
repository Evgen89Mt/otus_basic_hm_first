#include <iostream>

#include "calculate_u.h"

int main()
{
    std::cout << "Mini calculate: " << std::endl;
    
    Calculate_u math;
    double res = math.add(7.5, 9.1);
    std::cout << "add >> 7.5 + 9.1 = " << res << std::endl;

    res = math.subtract(170.5, 52.8);
    std::cout << "subtract >> 170.5 - 52.8 = " << res << std::endl; 

    res = math.average(23.45, 73.9);
    std::cout << "average >> 23.34 and 73.9 = "<< res << std::endl;

    res = math.square(5.5);
    std::cout << "square >> 5.5 = " << res << std::endl;

    return 0;
}