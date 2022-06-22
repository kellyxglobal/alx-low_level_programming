#include "mainh"

/**
 * _puts_recursion - prints a string with a new line
 * @s: Character String
 * Return: \n new line
 */
void _puts_recursion(char *s);
{
	char s[] = "Welcome to my world.\n";

	int i = 0;

	while (s[i] != '\n' && s[i] != '\0')
	{
		_puts_recursion(s[i]);
		i++;
	}
	return (0);

}
