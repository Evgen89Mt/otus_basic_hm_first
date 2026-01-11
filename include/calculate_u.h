#pragma once

#include <iostream>

class Calculate_u
{
    public:
        Calculate_u();
        ~Calculate_u();

        int add(int a, int b);
        int subtract(int a, int b);

        double average(double a, double b);
        double square(double a);

        double multiply(double a, double b);
        double divide(double a, double b);
};