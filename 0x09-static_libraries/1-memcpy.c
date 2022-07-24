#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the dest
 * @src: pointer to the source
 * @n: bytes of the memory
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n) /*Declaring while*/
	{
		*(dest + i) = *(src + i); /*Adds 1 point to des and src*/
		i++;
	} /*end while*/

	return (dest);
}

