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
	int n1 = 0;
	int n2 = 1;

	for (i = 1; i <= 50; i++)
	{	
		sum = n1 + n2;
		printf("%d, ", sum);
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}
