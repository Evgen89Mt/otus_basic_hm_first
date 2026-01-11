#include <iostream>

#include "calculate_u.h"

int main()
{
    std::cout << "Mini calculate: " << std::endl;
    
    Calculate_u math;
    int res = math.add(7, 9);
    std::cout << "add >> 7 + 9 = " << res << std::endl;

    res = math.subtract(170, 52);
    std::cout << "subtract >> 170 - 52 = " << res << std::endl; 

    double res_db = math.average(23.45, 73.9);
    std::cout << "average >> 23.34 and 73.9 = "<< res_db << std::endl;

    res_db = math.square(5.5);
    std::cout << "square >> 5.5 = " << res_db << std::endl;

    res_db = math.multiply(6.9, 9.8);
    std::cout << "multiply >> 6.9 * 9.8 = " << res_db << std::endl;

    res_db = math.divide(240.8, 5.5);
    std::cout << "divide >> 240.8 / 5.5 = " << res_db << std::endl; 

    return 0;
}