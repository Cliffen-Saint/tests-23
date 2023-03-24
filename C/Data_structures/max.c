#include <stdio.h>
#include <stdlib.h>

double max(double num1, double num2, double num3)
{
    double result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}

double main()
{
    printf("%f", max(3, 67, 5.1));
    return 0;
}