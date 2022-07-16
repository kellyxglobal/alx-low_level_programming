#include <stdio.h>

int main()
{
	char lower_case, upper_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		if ('c' == lower_case)
			putchar(lower_case);
			putchar('\n');

		for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
		{
			if ('C' == upper_case)
				putchar(upper_case);

		}
	}
	return (0);
}
