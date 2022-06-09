#include <stdio.h>
/**
* main - Highest Prime Numbers
* Return: Value 0
*/
int main(void)
{
	long int i, num
	num = 612852475143;

	for (i  = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
