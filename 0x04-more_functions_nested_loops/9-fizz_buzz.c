#include "main.h"
/**
* print_numbers - print number 0-9
* Return: void
*/
void print_numbers(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i + '0');
	}
	_putchar('\n');
}
