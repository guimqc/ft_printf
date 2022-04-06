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
	int x = 45612322;
	int X = 1234456;
	char *p =  "hello";
	unsigned int u = 4294967295;

	ft_printf("*********TEST RESULT*********\n");
	ft_printf("char= %c\nint= %i\ndeci= %d\nstring= %s\nhexa_low= %x\nhexa_high= %X\npointer= %p\nunsigned long= %u\n %%=%%\n\n", c, i, deci, s, x, X, p, u);

	// printf returns the lengtht of the string it printed
	printf("*****printf returns the length of what it prints*****\n");

	int str_len = printf("(char) %c\n", 'v');
	int my_str_len = ft_printf("(char) %c\n", 'v');
	printf("real return = %i\n", str_len);
	printf("my return = %i\n\n", my_str_len);

	int str_len1 = printf("(hexa) %x\n", 12);
	int my_str_len1 = ft_printf("(hexa) %x\n", 12);
	printf("real return = %i\n", str_len1);
	printf("my return = %i\n\n", my_str_len1);

	int str_len2 = printf("(pointer) %p\n", p);
	int my_str_len2 = ft_printf("(pointer) %p\n", p);
	printf("real return = %i\n", str_len2);
	printf("my return = %i\n\n", my_str_len2);
}
