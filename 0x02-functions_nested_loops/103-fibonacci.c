#include <stdio.h>
/**
* main - first 50 fibonacci numbers
* multiplies of 3 or 5 and sum of the multiples
*
* Return: Always 0.
*/
int main(void)
{
	long int sum =0;
	long int n1 = 0;
	long int n2 = 1;

	while (sum <= 4000000)
	{
		sum = n1 + n2;
		if (sum % 2 == 0)
		{
			printf("%ld", sum);
			if (sum < 4000000)
				printf(", "); 
		}
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}
