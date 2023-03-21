#include "main.h"


/**

* putchar

* Char to print

* return on success 0

*/


int _isalpha(int c)

{

        if ((c>=97 && c<=122) || (c>=65 && c<=90))
	{
                return (1);
	}
        else
	{
                return(0);
	}
	_putchar('\n');
}
