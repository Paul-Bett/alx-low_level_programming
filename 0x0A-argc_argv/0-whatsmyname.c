#include <stdio.h>
/**
* main -  writes program name
* @argc: arguement count
* @argv: array of pointers to CLI arguement
* Return: 0
**/
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
