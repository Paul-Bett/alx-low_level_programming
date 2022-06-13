#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Success.
 */
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned) time(&t));
	while (c < 10)
	{
		r = rand() % 126;
		c++;
		printf("%c", r);
	}
	return (0);
}
