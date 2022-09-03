#include <stdio.h>
#include <string.h>

enum {SUCCESS, FAIL};

void CharReadWrite(FILE *read, FILE *write);

int main()
{
	FILE *fptr1, *fptr2;
	char filename1[] = "kelechi.txt";
	char filename2[] = "haiku.txt";
	int reval = SUCCESS;

	if ((fptr1 = fopen(filename1, "w")) == NULL)
	{
		printf("The file:%s failed to open", filename1);
		reval = FAIL;
	}else if ((fptr2 = fopen(filename2, "r")) == NULL)
	{
		printf("The file %s, failed to open", filename2);
		reval = FAIL;
	} else 
	{
		CharReadWrite(fptr2, fptr1);
		fclose(fptr1);
		fclose(fptr2);
	}
	return reval;
}

//Function definition
void CharReadWrite(FILE *read, FILE *write)
{
	int c;
	while((c = fgetc(read)) != EOF)
	{
		fputc(c, write);
		putchar(c);
	}
}
