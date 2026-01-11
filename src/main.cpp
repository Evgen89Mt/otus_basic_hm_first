#include <iostream>

#include "calculate_u.h"

int main()
{
    std::cout<<"Mini calculate: "<<std::endl;
    
    Calculate_u math;
    int res = math.add(7, 9);
    std::cout<<"Func add >> 7 + 9 = "<< res << std::endl;

    res = math.subtract(170, 52);
    std::cout<<"Func subtract >> 170 - 52 = " << res << std::endl; 

    return 0;
}