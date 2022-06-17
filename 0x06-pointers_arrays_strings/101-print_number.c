#include "main.h"
/**
 * print_number - Converts Integer to string
 * @n: Input integer
 * Return: void
 */
void print_number(int n);
{
	int i;
	int len;
	int j;
	int mux;

	len =0;
	i = n;
	while (i/10 != 0)
	{
		len++;
		i /= 10;
	}
	mux = len * 10;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (j = 0; j < len; j++)
	{
		_putchar((n % mux) + '0'); 
		mux /= 10;
	}
	return (dest);
}
