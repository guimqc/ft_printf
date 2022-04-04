#include "printf.h"
#include <stdio.h>

int	main()
{
	// warning: more '%' conversions than data arguments
	// printf("%i hello my name is %s and i am %i yrs old %i", age, "hello");
	
	// warning: data argument not used by format string
	// printf("hello\n", age);
	ft_printf("this %s a test to %d if my %c %p %i %u %x %X %%");
}
