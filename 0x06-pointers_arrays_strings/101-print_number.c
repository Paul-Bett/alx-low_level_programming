#include "main.h"
#include <math.h>
/**
 * print_number - Converts Integer to string
 * @n: Input integer
 * Return: void
 */
void print_number(int n)
{
	int i;
	int len;
	int j;
	int mux;
	int out;

	len =0;
	i = n;
	while (i/10 != 0)
	{
		len++;
		i /= 10;
	}
	mux = pow(10, len);
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (j = 0; j < len; j++)
	{
		out = n / mux;
		_putchar((n % mux) + '0');
		n -= (mux * out);
		mux /= 10;
	}
}
