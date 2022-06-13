#include "main.h"
/**
* _puts - Use pointer to change value in memory
* @str: Pointer to string location
*Return: Null/Void
*/
void _puts(char *str)
{
	char *cp = str
	int count;

	while (*cp)
	{
		count++;
		cp++;
	}
	for (i = 0; i < count / 2; i++)
	{
		putchar(*str);
		str +=2;
	}
	putchar('\n');
}
