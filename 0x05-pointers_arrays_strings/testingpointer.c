#include <stdio.h>

int main () 
{
	int var = 20;
	int *ip;

	ip = &var;

	printf("The address of the variable var: %p", &var);

	printf("The address of the pointer: %p", ip);

	printf("The value of the pointer: %d", *ip);

	return (0);

}
