#include <stdio.h>

int main(void)
{
	char text[17] = "Kelechi Anyaegbu";
	int i;

	for (i = 0; i < 17; i++)
	{
		putchar(text[i]);
		putchar('\n');
	}
	putchar('\n');
	return (0);
}
