#include <stdio.h>
#include <stdlib.h>
/**
* main -  Prints mul of arguements
* @argc: arguement count
* @argv: array of pointers to CLI arguement
* Return: 0
**/
int main(int argc, char *argv[])
{

	if (argc <= 2 || argc > 3)
	{
		printf("%s\n", "Error");
			return (98);
	}
	else if ((atoi(argv[argc - 1]) * atoi(argv[argc - 2])) > 0)
	{
		printf("%d\n", (atoi(argv[argc - 1]) * atoi(argv[argc - 2])));
		return (0);
	}
	if ((*argv[argc - 1] == '0') ||  (*argv[argc - 2]) == '0')
	{
		printf("%d\n", (atoi(argv[argc - 1]) * atoi(argv[argc - 2])));
		return (0);
	}
	printf("%s\n", "Error");
	return (98);
}
