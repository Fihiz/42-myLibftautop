/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 15:58:52 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/22 18:22:55 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_check_start(char const *s1, char const *set)
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
			if (s1[end] == set[count])
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t		start;
	size_t		end;
	size_t		i;

	start = ft_check_start(s1, set);
	end = ft_check_end(s1, set);
	if (end < start)
	{
		if (!(dest = (char*)malloc(sizeof(char) * 1)))
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if (!(dest = (char*)malloc(sizeof(char) * (end - start))))
		return (NULL);
	i = 0;
	return (dest);
}*/

