#include "main.h"
/**
* print_square - print square
* @n: Number of diagonal lines to be printed
* Return: void
*/
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; square > 0 && i <= square; i++)
	{
		for (j = 0; j <= square; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (square <= 0)
		_putchar('\n');
}
