#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: Pointer to string location
 * @accept: bytes to filter
 * Return: Pointer to memory s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int len = 0;

	while (accept[i])
	{
	j = 0;
		while (s[j])
		{
			if (s[i] == accept[j])
			{
				len++;
			}
			j++;
		}
		i++;
	}
	len++;
	return (len);
}
