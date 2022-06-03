#include <stdio.h>

/**
*main - Begin Here
*print 0-9 using putchar
*Return: Value 0 (true)
*/
int main(void)
{
	char ch = '0';

	for (int i = 0; i < 10; i++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
