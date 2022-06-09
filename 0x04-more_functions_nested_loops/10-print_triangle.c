#include "main.h"
/**
* print_triangle - triangle with #
* @size: Number of diagonal lines to be printed
* Return: void
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (k = 0; size > 0 && k < size; k++)
	{
		for (i = 0; i < i - 1; i++)
			_putchar(' ');
		for (j = i; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
