#include "main.h"

/**
 * _pow_recursion - Computes the value of x raised to the power of y.
 *
 * @x: The base number.
 * @y: The exponent.
 *
 * Description:
 *     This function recursively calculates the value of x raised to the
 *     power of y. If y is negative, the function returns -1 to indicate
 *     an error. If y is 0, the function returns 1. For y = 1, the function
 *     returns the base number x. For y > 1, the function recursively
 *     multiplies x by itself, reducing the exponent by 1 each time, until
 *     the exponent becomes 1.
 *
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return(-1);
}
else if (y == 1)
{
return(x);
}
else if (y == 0)
{
return(1);
}
    
return( x * _pow_recursion(x , y-1));
}
