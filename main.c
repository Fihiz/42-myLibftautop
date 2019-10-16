#include "libft.h"
#include <stdio.h>

int		main()
{
	char str[] = "Hello World";

	printf("Looking for a w in %s\n", ft_strrchr(str, 'o'));
	printf("Looking for a w with the true function %s\n", strrchr(str, 'o'));
	return (0);
}
