#include <criterion/criterion.h>
#include <stdarg.h>
#include "include/my.h"

int sum_stdarg(int i, int nb, ...)
{
    va_list valist;
    int sum;
    int index;

    va_start(valist, nb);
    index = 0;
    sum = 0;

    if (i == 0)
        while (index < nb) {
            sum = sum + va_arg(valist, int);
            index++;
        }
    else if (i == 1)
        while (index < nb) {
            sum = sum + my_strlen(va_arg(valist, char *));
            index++;
        }
    va_end(valist);
    return (sum);
}


Test(sum_stdarg, return_correct_when_i_is_zero)
{
	int ret = sum_stdarg(0, 3, 21, 25, -4);

	cr_assert_eq(ret, 42);
}
