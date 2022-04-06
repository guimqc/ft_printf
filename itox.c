#include <stdio.h>
#include "printf.h"

static int find_len(int n)
{
	int len;

	len = 0;
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len + 1);
}

char *itox(int n, int caps)
{
	(void) caps;
	char *result;
	char *hex = "0123456789abcdef";
	int len;

	len = find_len(n);
	result = ft_calloc(len + 1, sizeof(char));
	result[len] = '\0';
	while (n > 1)
	{
		printf("%i\n", n % 16);
		result[--len] = hex[n % 16];
		n /= 16;
	}
	return (result);
}

int main()
{
	printf("%s\n", itox(123, 1));
}
