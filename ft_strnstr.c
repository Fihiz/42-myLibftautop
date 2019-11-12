/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 14:26:30 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/12 18:01:23 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	while (*s1 && *s2)
	{
		while (*s2 < len)
		{
			if (s1 == s2)
				return ((char*)s1 + j);
		}
	}
	if (*s2 == '\0' || len == 0)
		return ((char*)s1);
	return (NULL);
}
