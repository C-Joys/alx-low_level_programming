#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: A pointer to one of the strings to be compared.
 * @s2: A pointer to the other string to be compared.
 * Return: comparison
 */
int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}

	return (*str_one - *str_two);
}
