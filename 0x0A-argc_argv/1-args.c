#include <stdio.h>
/**
 *main - prints file name
 *@argc: argument count
 *@argv: argument vector
 *DESCRIPTION: prints file name
 *Return: Always (0) Success
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		*argv = *argv;
		i++;
	}
	printf("%d\n", i);
	return (0);
}
