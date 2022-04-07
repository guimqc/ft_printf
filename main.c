#include "printf.h"

int	main()
{
	char c = 'a';
	char *s = "test";
	int i = 456;
	int deci = 123;
	int x = 45612322;
	int X = 1234456;
	char *p =  "hello";
	unsigned int u = 4294967295;

	// basic tests
	ft_printf("*********TEST RESULT*********\n");
	ft_printf("char = %c\nint = %i\ndeci = %d\nstring = %s\nhexa_low = %x\nhexa_high = %X\npointer = %p\nunsigned long = %u\n %% = %%\n\n", c, i, deci, s, x, X, p, u);

	// printf returns the lengtht of the string it printed
	printf("*****printf returns the length of what it prints*****\n");

	int str_len = printf("(char) %c\n", 'v');
	int my_str_len = ft_printf("(char) %c\n", 'v');
	printf("real return = %i\n", str_len);
	ft_printf("my return = %i\n\n", my_str_len);

	int str_len1 = printf("(hexa) %x\n", 12);
	int my_str_len1 = ft_printf("(hexa) %x\n", 12);
	printf("real return = %i\n", str_len1);
	ft_printf("my return = %i\n\n", my_str_len1);

	int str_len2 = printf("(pointer) %p\n", p);
	int my_str_len2 = ft_printf("(pointer) %p\n", p);
	printf("real return = %i\n", str_len2);
	ft_printf("my return = %i\n\n", my_str_len2);

	int str_len3 = printf("(string) %s\n", s);
	int my_str_len3 = ft_printf("(string) %s\n", s);
	printf("real return = %i\n", str_len3);
	ft_printf("my return = %i\n\n", my_str_len3);

	int str_len4 = printf("(number) %i\n", i);
	int my_str_len4 = ft_printf("(number) %i\n", i);
	printf("real return = %i\n", str_len4);
	ft_printf("my return = %i\n\n", my_str_len4);
}
