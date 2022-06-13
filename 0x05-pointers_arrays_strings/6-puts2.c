#include "main.h"
/**
* puts2 - Use pointer to change value in memory
* @str: Pointer to string location
*Return: Null/Void
*/
void puts2(char *str)
{
	while (*str)
	{
		putchar(*str);
		str +=2;
	}
	putchar('\n');
}
