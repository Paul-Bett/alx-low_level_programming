#include "main.h"
/**
* print_number - Print large number character at a time
* @n: Number to pring
* Return: Void
*/
void print_number(int n)
{
	int ones, tens, hundreds, thousands, tenthous;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		ones = n % 10;
		tens = n / 10;
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	else if (n < 1000)
	{
		ones = n % 10;
		tens = (n / 10) % 10;
		hundreds = n / 100;
		_putchar(hundreds + '0');
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	else if (n < 10000)
	{
		ones = n % 10;
		tens = (n / 10) % 10;
		hundreds = (n / 100) % 10;
		thousands = n / 1000;
		_putchar(thousands + '0');
		_putchar(hundreds + '0');
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	_putchar('\n');
}
