#include "main.h"

/**
*_print_sign - Begin Here
*@n: integer value
*return 1 if lower case and 0 otherwise
*Return: Value 0 (true)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n = 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
