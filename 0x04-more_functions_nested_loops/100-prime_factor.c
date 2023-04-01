#inlude <stdio.h>
#include "main.h"

/**
 * main - absolute value
 * @i @n: the number to be printed
 * Return: return 0
 */


int main(void)
{
	unsigned long int i, n = 612852475143;
	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%1u\n", n);
	return (0);
}

