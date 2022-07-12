#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character *str to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char *str)
{
	return (write(1, &str, 1));
}
