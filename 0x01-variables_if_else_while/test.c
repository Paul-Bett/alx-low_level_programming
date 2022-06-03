#include <stdio.h>

/**
*main - Begin Here
*
*Return: Value 0 (true)
*/
int main(void)
{
	int num1, num2;
	int R1 = 0 + '0';
	int R2 = 0 + '0';

	for (num1 = 0 + '0' ; num1 < 10 + '0'; num1++)
	{
		for (num2 = 0 + '0'; num2 < 10 + '0'; num2++)
		{	
			putchar(num1);
			putchar(num2);
			putchar(' ');
			putchar(R1);
			putchar(R2);
			if (num1 == (9 + '0') && num2 == (9 + '0'))
			{
				;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			R2++;
		}
		R1++;
	}
	putchar('\n');
	return (0);
}
