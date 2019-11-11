/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 14:26:30 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/11 17:15:10 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t look;

	i = 0;
	while (s2[i] && i < len)
	{
		look = i;
		i++;
	}
	i = 0;
	while (s1[i])
	{
		if (s1 == s2)
			return ((char*)s2);
		i++;
	}
	if (s2 == 0)
		return ((char*)s1);
	return (NULL);
}
