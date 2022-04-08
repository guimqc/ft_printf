#include "ft_printf.h"

// category p:
// LONG_MIN LONG_MAX ULONG_MA, -ULONG_MAX

int	main()
{
	char c = 'a';
	char *s = NULL;
	int i = 2147483647;
	int d = -2147483648;
	int x = 2147483647;
	int X = -2147483648;
	void *p = NULL;
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

	int str_len = printf("(char) %c\n", c);
	int my_str_len = ft_printf("(char) %c\n", c);
	printf("real return = %i\n", str_len);
	ft_printf("my return = %i\n\n", my_str_len);

	int str_len1 = printf("(hexa) %x\n", x);
	int my_str_len1 = ft_printf("(hexa) %x\n", x);
	printf("real return = %i\n", str_len1);
	ft_printf("my return = %i\n\n", my_str_len1);
	
	int str_len7 = printf("(HEXA) %X\n", X);
	int my_str_len7 = ft_printf("(HEXA) %X\n", X);
	printf("real return = %i\n", str_len7);
	ft_printf("my return = %i\n\n", my_str_len7);

	int str_len2 = printf("(pointer) %p\n", p);
	int my_str_len2 = ft_printf("(pointer) %p\n", p);
	printf("real return = %i\n", str_len2);
	ft_printf("my return = %i\n\n", my_str_len2);

	int str_len3 = printf("(string) %s\n", s);
	int my_str_len3 = ft_printf("(string) %s\n", s);
	printf("real return = %i\n", str_len3);
	ft_printf("my return = %i\n\n", my_str_len3);

	int str_len4 = printf("(int) %i\n", i);
	int my_str_len4 = ft_printf("(int) %i\n", i);
	printf("real return = %i\n", str_len4);
	ft_printf("my return = %i\n\n", my_str_len4);

	int str_len8 = printf("(d) %d\n", d);
	int my_str_len8 = ft_printf("(d) %d\n", d);
	printf("real return = %i\n", str_len8);
	ft_printf("my return = %i\n\n", my_str_len8);

	int str_len5 = printf("(percent) %%\n");
	int my_str_len5 = ft_printf("(percent) %%\n");
	printf("real return = %i\n", str_len5);
	ft_printf("my return = %i\n\n", my_str_len5);

	int str_len6 = printf("(u) %u\n", u);
	int my_str_len6 = ft_printf("(u) %u\n", u);
	printf("real return = %i\n", str_len6);
	ft_printf("my return = %i\n\n", my_str_len6);
}
