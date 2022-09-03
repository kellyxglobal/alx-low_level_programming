#include <stdio.h>
#include <string.h>

enum {SUCCESS, FAIL};

int main()
{
        FILE *fptr;
        char filename[] = "haiku.txt";
        int reval = SUCCESS;

        if ((fptr = fopen(filename, "r")) == NULL)
        {
                printf("Could open the %s", filename);
                reval = FAIL;
        }else
        {
                printf("The file is opened: 0x%p\n", fptr);
                printf("The file is ready to be closed");
                fclose(fptr);
        }
        return reval;
}

