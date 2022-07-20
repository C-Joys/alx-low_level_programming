#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: A given number to return its factorial
 *
 * Return: The factorial of @n
 * If n is lower than 0, the function should
 * return -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
