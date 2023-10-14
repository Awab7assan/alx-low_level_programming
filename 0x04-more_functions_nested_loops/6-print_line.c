#include"main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: is the number of times that _ charachter should be printed
*/

void print_line(int n)
{
	int lnchar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchar = 1; lnchar <= n; lnchar++)
			_putchar('_');
		_putchar('\n');
	}
}
