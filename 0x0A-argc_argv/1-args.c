#include <stdio.h>
/**
* main -  Prints number of arguements
* @argc: arguement count
* @argv: array of pointers to CLI arguement
* Return: 0
**/
int main(int argc, char *argv[])
{
	*argv = *argv;
	return (argc - 1);
}
