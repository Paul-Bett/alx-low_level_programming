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
	while (n[i])
	{
		if (n[i++] == ' ')
		{
			if (n[i] >= 'a' && n[i] <= 'z')
				n[i] += ('A' - 'a');
		}
	}
	return (n);
}

