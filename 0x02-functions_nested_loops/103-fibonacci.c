#include <stdio.h>
/**
* main - first 50 fibonacci numbers
* multiplies of 3 or 5 and sum of the multiples
*
* Return: Always 0.
*/
int main(void)
{
	long int fib =0;
	long int n1 = 0;
	long int n2 = 1;
	long int sum;

	while (fib <= 4000000)
	{
		fib = n1 + n2;
		if (fib % 2 == 0)
		{
			sum += fib
			printf("%ld", sum);
		}
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}
