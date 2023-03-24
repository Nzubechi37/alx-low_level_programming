#include "main.h"
/**
* prints the last digit of a num
* input number as an int
*
* more numbers
*/

void more_numbers(void)
{

int i, j;
	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1')
			_putchar(j % 10 + '0');
		}
			_putchar('\n')
		}
}
