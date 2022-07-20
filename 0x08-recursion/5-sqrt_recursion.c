#include "main.h"

/**
 * helper - Finds the square root of 2 numbers
 * @a: number
 * @b: Number to test for the square toot of @a
 *
 * Return: Square root.
 */

int helper(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (helper(a, b + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return the square root of
 *
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
