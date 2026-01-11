#include "calculate_u.h"

        Calculate_u::Calculate_u(){}
        Calculate_u::~Calculate_u(){}
        

        int Calculate_u::add(int a, int b)
        {
            return a + b;
        }

        int Calculate_u::subtract(int a, int b)
        {
            return a - b;
        }

        double Calculate_u::average(double a, double b)
        {
            return (a + b) / 2.0;
        }

        double Calculate_u::square(double a)
        {
            return a * a;
        }

        double Calculate_u::multiply(double a, double b)
        {
            return a * b;
        }

        double Calculate_u::divide(double a, double b)
        {
            if (b == 0.0)
            {
                return 0.0;
            }

            return a / b;
        }