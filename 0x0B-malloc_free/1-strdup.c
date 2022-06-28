#include "main.h"
/**
 * _strdup - function pointing to new copied memory allocation
 * @str: string to be copied
 * Return: pointer to new memory location, Null otherwise
 **/
char *_strdup(char *str)
{
	char *cpy;
	int len = 0;
	int i;

	while (str[len])
		len++;
	
	if (len == 0)
		return (NULL);	
	cpy = malloc(sizeof(char) * len);
	for (i = 0; i < len; i++)
		cpy[i] = str [i];
	return (cpy);
}
