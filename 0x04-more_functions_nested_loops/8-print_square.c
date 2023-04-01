#include "main.h"

/**
 * print_square - absolute value
 * @n: the number to be printed
 *Return void
 */


void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('#');

	for (i = 0; i < size; i++)
	{
		for (j =0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n')
	}
}

