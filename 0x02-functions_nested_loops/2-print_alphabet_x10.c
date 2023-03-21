#include "main.h"


/**

* prints alpha 10 timesr

* Char to print

* return on success 0

*/


void print_alphabet_x10(void)

{

        int ten;

        char le;

        for (ten=0; ten<=9; ten++)

        {

                for (le='a'; le<='z'; le++)

                        _putchar(le);

                 _putchar('\n');

        }

}
