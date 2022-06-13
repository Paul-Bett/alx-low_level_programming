#include "main.h"
/**
* print_rev - Use pointer to change value in memory
* @s: Pointer to string location
*Return: Null/Void
*/
void print_rev(char *s)
{
	char r[];
	int i = 0;

	while (*s)
		i++;
	for (i; i >= 0; i--)
		putchar(s+i);
	putchar('\n');
}
