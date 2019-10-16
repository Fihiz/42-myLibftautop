#include "libft.h"
#include <stdio.h>

int		main()
{
	char str[] = "Hello World";

	printf("Looking for a w in %s\n", ft_strchr(str, 'W'));
	printf("Looking for a w with the true function %s\n", strchr(str, 'W'));
	return (0);
}
