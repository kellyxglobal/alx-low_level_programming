#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		putchar('+');
	}

	else if (n == 0)
	{
		value = 0;
		putchar('O');
	}

	else if (n < 0)
	{
		value = -1;
		putchar('-');
	}

	else
	{
		return(value);
	}

}
