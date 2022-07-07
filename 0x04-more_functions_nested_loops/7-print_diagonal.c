#include "main.h"

/**
 * print_diagonal - print diagonal line on the terminal
 * and new line
 * @n: the number of time \ should be printed
 */
void print_diagonal(int n)
{
	/*slash and space*/
	int sl, sp;

	if (n > 0)
	{
		for (sp = 0; sp < n; sp++)
		{
			for (sl = 0; sl < sp; sl++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
