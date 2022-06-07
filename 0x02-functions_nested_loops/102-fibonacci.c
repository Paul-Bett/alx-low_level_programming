#include <stdio.h>
/**
* main - first 50 fibonacci numbers
* multiplies of 3 or 5 and sum of the multiples
*
* Return: Always 0.
*/
int main(void)
{
	int i, sum;
	sum = 1;

	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", sum);
		sum += sum;
	}
	printf("\n");
	return (0);
}
