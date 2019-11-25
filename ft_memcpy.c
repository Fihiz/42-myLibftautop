/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 13:54:55 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/25 14:35:50 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*str;
	char		*desti;

	i = 0;
	str = (const char*)src;
	desti = dest;
	if (!dest && !src)
		return (0);
	if (n > 0)
	{
		while (i < n)
		{
			desti[i] = str[i];
			i++;
		}
		return (desti);
	}
	return (desti);
}
