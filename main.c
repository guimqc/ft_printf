#include "printf.h"

int	main()
{
	char c = 'a';
	char *s = "test";
	int i = 2147483647;
	int d = -2147483648;
	int x = -123;
	int X = 456;
	char *p =  "hello u";
	unsigned int u = 4294967295;

	// basic tests
	ft_printf("*********TEST RESULT*********\n");
	ft_printf("c = %c\ni = %i\nd = %d\ns = %s\nx = %x\nX = %X\np = %p\nu = %u\n%% = %%\n\n", c, i, d, s, x, X, p, u);

	printf("real c = %c\n", c);
	printf("real i = %i\n", i);
	printf("real d = %d\n", d);
	printf("real s = %s\n", s);
	printf("real x = %x\n", x);
	printf("real X = %X\n", X);
	printf("real p = %p\n", p);
	printf("real u = %u\n", u);
	printf("real %% = %%\n\n");

	// printf returns the lengtht of the string it printed
	printf("*****printf returns the length of what it prints*****\n");

	int str_len = printf("(char) %c\n", 'v');
	int my_str_len = ft_printf("(char) %c\n", 'v');
	printf("real return = %i\n", str_len);
	ft_printf("my return = %i\n\n", my_str_len);

	int str_len1 = printf("(hexa) %x\n", x);
	int my_str_len1 = ft_printf("(hexa) %x\n", x);
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
