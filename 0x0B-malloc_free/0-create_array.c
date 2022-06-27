#include <stdlib.h>
/**
 * *create_array - Create dynamic array and initialize with a character
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	if (size == 0)
		return (NULL);
	A = malloc(sizeof(char) * size);
	if (A == NULL)
		return (NULL);
    i = 0;
	while (i < size)
	{
		A[i] = c;
		i++;
	}
	return (A);
}
