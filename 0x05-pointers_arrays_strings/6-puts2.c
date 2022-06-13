#include "main.h"
/**
* _puts2 - Use pointer to change value in memory
* @str: Pointer to string location
*Return: Null/Void
*/
void _puts2(char *str)
{
	while (*str)
	{
		putchar(*str);
		putchar('\n');
		str++;
	}
}
