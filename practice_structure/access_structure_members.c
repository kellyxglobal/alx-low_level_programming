#include <stdio.h>

/* 19L01.c Access to structure members */

main(void)
{
	struct computer 
	{
		float cost;
		int year;
		int cpu_speed;
		char cpu_type[16];
	} model;
	
	printf(“The type of the CPU inside your computer?\n”);
	gets(model.cpu_type);
	printf(“The speed -MHz of the CPU?\n”);
	scanf(“%d”, &model.cpu_speed);
	printf(“The year your computer was made?\n”);
	scanf(“%d”, &model.year);
	printf(“How much did you pay fo the computer?\n”);
	scanf(“%f”, &model.cost);
	
	printf(“Here are what you entered:\n”);
	printf(“Year: %d\n”, model.year);
	printf(“Cost: $%6.2f\n”, model.cost);
	printf(“CPU type: %s\n”, model.cpu_type);
	printf(“CPU speed: %d MHz\n”, model.cpu_speed);
	
	return 0;
}
