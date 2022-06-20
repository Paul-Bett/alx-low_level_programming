#include "main.h"
/**
 * _strstr - function that loocates substring
 * @haystack: Pointer to string location
 * @needle: substring to filter
 * Return: Pointer to memory haystack or Null if no hit
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (needle[i])
	{
	j = 0;
		while (haystack[j])
		{
			if (needle[i] == haystack[j])
			{
				return (haystack + j);
			}
			j++;
		}
		i++;
	}
	return (0);
}
