#include <stdio.h>
/**
* main - prints the number of command line arguments
* @argc: argument count
* @argv: array containing the program command line arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
