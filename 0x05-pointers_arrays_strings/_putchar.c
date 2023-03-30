#include <unistd.h>

/** 
 * _putchar : function
 * know ur putchar
 * @c : char type
 * Return -always one
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
};
