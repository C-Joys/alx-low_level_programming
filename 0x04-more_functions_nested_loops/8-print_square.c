#include "main.h"

/**
 * print_square - prints a square with # and followed by a new line
 * @size: size of the square
 */
void print_square(int size)
{
	int r, c; /*Row and Column*/

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
