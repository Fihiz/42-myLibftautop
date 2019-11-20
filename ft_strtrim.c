/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 15:58:52 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/20 15:26:56 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_check_start(char const *s1, char const *set)
{
	size_t	start;
	size_t	count;
	start = 0;
	while (s1[start])
	{
		count = 0;
		while (set[count])
		{
			if (s1[start] == set[count])
			{
				start++;
				count = 0;
			}
			else
				count++;
		}
		if (set[count] == '\0')
			return (start);
	}
	return (start);
}

size_t	ft_check_end(char const *s1, char const *set)
{
	size_t end;
	size_t count;
	end = ft_strlen(s1) - 1;
	while (end != 0)
	{
		count = 0;
		while (set[count])
		{
			if(s1[end] == set[count])
			{
				end--;
				count = 0;
			}
			else
				count++;
		}
		if (set[count] == '\0')
			return (end);
	}
	return (end);
}


int		main()
{
	char *set = "alimqte"		;
	printf("%zu\n", ft_check_start("0123456789", set));
	char *sit = "987";
	printf("\n");
	printf("%zu\n", ft_check_end("0123456789", sit));
	return (0);
}
