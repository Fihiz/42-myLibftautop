/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 14:44:33 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 16:01:09 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*str;
	unsigned char		*desti;

	str = src;
	desti = dest;
	if (!desti && !str)
		return (0);
	if (str > desti)
		return (ft_memcpy(desti, str, n));
	else
	{
		while (n--)
			*(desti + n) = *(str + n);
	}
	return (dest);
}
