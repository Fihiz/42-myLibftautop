/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 14:28:25 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 15:19:14 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *str;
	char *desti;
	size_t i;

	i = 0;
	str = src;
	desti = dest;
	while (i < n && i != (unsigned char)c)
	{
		desti[i] = str[i];
		i++;
	}
	desti[i] = str[i];
	return ((void*)desti);
}
