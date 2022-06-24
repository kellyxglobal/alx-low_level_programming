#include <stdio.h>
/**
 * main - displays its name, followed by a new line.
 * @argc: indicates number of command line arguments.
 * @argv: array strings containing program command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("The array value at 0 = %s\n", argv[0]);
	return (0);
}
