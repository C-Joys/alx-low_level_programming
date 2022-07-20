#include "main.h"

/**
 * primeFinder - searches for if a number is prime
 * @a: the number to check
 * @b: the numbers we'll go through
 *
 * Return: whether or not the number if is prime
 */

int primeFinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeFinder(a, b + 1);

	return (1);
}

/**
 * is_prime_number - tells us if an integer is a prime number
 * @n: number to check
 *
 * Return: 0 if the number is no prime and 1 if it is prime
 */

int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
