#include "main.h"
/**
* print_rev - Use pointer to change value in memory
* @s: Pointer to string location
*Return: Null/Void
*/
void print_rev(char *s)
{
	int i = 0;
	itn j;

	while (*s)
	{
	i++;
	s++;
	}
	s = s - (i + 1);
	for (j = 0; j < i; j++)
	{
		putchar(*s);
		s += 2;
	}
	putchar('\n');
}
