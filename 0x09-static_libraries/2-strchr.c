#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * @s: string
 * @c: character to search
 *
 * Return: pointer to the first occurence of the character c in the string c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*declaring while*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0); /*valus null*/
}
