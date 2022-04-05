#include "printf.h"
#include <stdio.h>

int	main()
{
	// warning: more '%' conversions than data arguments
	// printf("%i hello my name is %s and i am %i yrs old %i", age, "hello");
	
	// warning: data argument not used by format string
	// printf("hello\n", age);
	char *s = "this %s a test to %d if my %c %p %i %u %x %X %%\n";
	int arg_count = count_arg(s);

	ft_printf("*********TEST RESULT*********\n");
	printf("arg count: %i\n", arg_count);
	ft_printf(s);
}
