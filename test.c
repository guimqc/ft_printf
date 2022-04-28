#include <stdarg.h>
#include <stdio.h>

int    add(int num, ...)
{
    va_list arg_lst;
    int rtn = 0;

    va_start(arg_lst, num);
    while (num-- > 0)
    {
        rtn += va_arg(arg_lst, int);
    }
    va_end(arg_lst);
    return(rtn);
}

int main()
{
    printf("%i\n", add(2, 3, 2, 1));
}