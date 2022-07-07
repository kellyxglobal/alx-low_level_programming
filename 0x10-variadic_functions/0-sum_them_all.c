#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums up all n values
 * @n:  parameters to be summed up
 * if n is equal to zero
 * Return: return 0
 */
int sum_them_all(const unsigned int n, ...)
{
        va_list list;
        unsigned int i;
        int sum;

        va_start(list, n);
        for (i = 0, sum = 0; i < n; i++)
                sum += va_arg(list, int);

        va_end(list);
        return (sum);
}
