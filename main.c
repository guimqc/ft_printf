#include "printf.h"
#include <stdio.h>

int	main()
{
	// warning: more '%' conversions than data arguments
	// printf("%i hello my name is %s and i am %i yrs old %i", age, "hello");
	
	// warning: data argument not used by format string
	// printf("hello\n", age);
	char c = 'a';
	char *s = "test";
	int i = 9;
	char *p = malloc(sizeof(char) * 1);
	unsigned int u = 4294967295;
	int x = 12;
	int X = 12;

	ft_printf("*********TEST RESULT*********\n");
	ft_printf("char=%c\nstring=%s\nint=%i\npointer=%p\nunsigned long=%u\nhexa_low=%x\nhexa_high=%X\n%%=%%\n", c, s, i, p, u, x, X);
}
