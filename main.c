#include "printf.h"

int	main()
{
	// warning: more '%' conversions than data arguments
	// printf("%i hello my name is %s and i am %i yrs old %i", age, "hello");
	
	// warning: data argument not used by format string
	// printf("hello\n", age);
	char c = 'a';
	char *s = "test";
	int i = 456;
	int deci = 123;
	int x = 1234;
	int X = 1234;
	char *p = malloc(sizeof(char) * 1);
	unsigned int u = 4294967295;

	ft_printf("*********TEST RESULT*********\n");
	ft_printf("char=%c\nint=%i\ndeci=%d\nstring=%s\nhexa_low=%x\nhexa_high=%X\npointer=%p\nunsigned long=%u\n%%=%%\n\n", c, i, deci, s, x, X, p, u);

	// printf returns the lengtht of the string it printed
	printf("*****printf returns the length of what it printed*****\n");

	int str_len = printf("this string is %c char long\n", 'v');
	int my_str_len = ft_printf("this string is %c char long\n", 'v');
	printf("real return = %i\n", str_len);
	printf("my return = %i\n", my_str_len);
}
