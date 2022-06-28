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
	
	if (str == NULL)
		return (NULL);	
	cpy = malloc(sizeof(char) * (len - 1));
	for (i = 0; i < len; i++)
		cpy[i] = str [i];
	return (cpy);
}
