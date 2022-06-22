#include <stdio.h>
/**
 * _strlen_recursion - returns length of a string
 * @s: Pointer to String
 * Return: Void
 */
int len = 0;

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		len++;
		return (len);
	}
	else
		return (0);
}
