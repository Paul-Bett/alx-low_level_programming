#include <stdio.h>
/**
 * _puts_recursion - Prints string followed by new line
 * @s: Pointer to String
 * Return: Void
 */
void _puts_recursion(char *s)
{
	putchar(*s);
	if (*s != '\0')
		_puts_recursion(s + 1);
	else
		putchar('\n');
}
