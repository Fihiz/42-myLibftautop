/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 14:28:25 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/30 17:08:30 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*str;
	char		*desti;
	size_t		i;

	i = 0;
	str = (const char*)src;
	desti = dest;
	while (i < n)
	{
		if (i == (unsigned char)c)
			return (desti + 1);
		desti[i] = str[i];
		i++;
	}
	return (0);
}
