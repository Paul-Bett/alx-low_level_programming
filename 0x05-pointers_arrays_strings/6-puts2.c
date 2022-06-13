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

	while (*cp != '\0')
	{
		count++;
		cp++;
	}
	count--;
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			putchar(*(str + i));
	}
	putchar('\n');
}

/*

void puts2(char *str)
{
	int len = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	len--;
	for (z = 0 ; z <= len ; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}*/
