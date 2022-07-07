#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int r, c, sp, po; /*Row Column Space Pound*/

	if (size <= 0)
		_putchar('\n');

	for (r = 0; r < size; r++)
	{
		c = size - 1 - r;

		for (sp = c; sp > 0; sp--)
			_putchar(' ');
		for (po = size - c; po > 0; po--)
			_putchar(35);

		_putchar('\n');
	}
}
