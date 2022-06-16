#include "main.h"
/**
 * cap_string - Perform word Case
 * @n: pointer
 *
 * Return: n
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	if (n[0] >= 'a' && n[0] <= 'z')
		n[0] += ('A' - 'a');
	while (n[i])
	{
		if (n[i] == ' ' || n[i] == '\n')
		{
		i++;
			if (n[i] >= 'a' && n[i] <= 'z')
				n[i] += ('A' - 'a');
		}
	}
	return (n);
}

