/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 14:26:30 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/14 12:44:20 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*s2 == 0 || len == 0)
		return ((char*)s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s2[j] == s1[i])
			j++;
		if (s2[j] == '\0')
			return ((char*)s1 + i);
		i++;
	}
	return (NULL);
}
