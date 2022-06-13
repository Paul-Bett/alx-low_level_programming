#include "main.h"
/**
* puts2 - Use pointer to change value in memory
* @str: Pointer to string location
*Return: Null/Void
*/
void puts2(char *str)
{
	char *cp = str;
	int count;
	int i;

	while (*str)
	{
		count++;
		str++;
	}
	for (i = 0; i < count - 1 ;)
	{
		putchar(*cp);
		cp += 2;
		i += 2;
	}
	putchar('\n');
}
