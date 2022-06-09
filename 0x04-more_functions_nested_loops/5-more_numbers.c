#include "main.h"
/**
* print_most_numbers - print number 0-9
* Return: void
*/
void print_most_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar(1 + '0');
			_putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
