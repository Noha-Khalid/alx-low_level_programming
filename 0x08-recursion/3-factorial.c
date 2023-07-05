#include "main.h"
/**
 * factorial - Computes the factorial of a number.
 *
 * @n: The number to compute the factorial of.
 *
 * Description:
 *     This function calculates the factorial of the input number @n.
 *     If the number is negative, the function returns -1 to indicate an
 *     error. If the number is 0, the function returns 1, as the factorial
 *     of 0 is defined as 1. For positive numbers, the function recursively
 *     calculates the factorial by multiplying the number with the factorial
 *     of (n-1) until n reaches 0.
 *
 * Return: The factorial of the number (or -1 for errors).
 */

int factorial(int n)
{

if (n < 0 )
{
  return (-1) ;
}
else if ( n == 0)
{
 return (1) ;
}

 return  (n * factorial(n -1));
}
