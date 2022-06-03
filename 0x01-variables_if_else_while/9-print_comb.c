#include <stdio.h>

/**
*main - Begin Here
*print 0-9 using putchar
*Return: Value 0 (true)
*/
int main(void)
{
	int num1 = ((char)'0');
	int num2, i, j;

	for (i = 0; i < 10; i++)
	{
		num2 = ((char)'0');
		for (j = 0; j < 10; j++)
		{
			putchar(num1);
			putchar(num2);
			putchar(',');
			putchar(' ');
			num2++;
		}
		num1++;
		j = 0;
	}
	return (0);
}
