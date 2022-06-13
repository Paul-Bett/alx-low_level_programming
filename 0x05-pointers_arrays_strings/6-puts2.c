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

	while (*cp)
	{
		count++;
		cp++;
	}
	for (i = 0; i < count ; i += 2)
	{
		putchar(*str);
		str +=2;
	}
	putchar('\n');
}
