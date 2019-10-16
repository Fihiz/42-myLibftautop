/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 13:54:55 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 12:48:45 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	char		*desti;

	i = 0;
	str = src;
	desti = dest;
	while (i < n)
	{
		desti[i] = str[i];
		i++;
	}
	desti[i] = str[i];
	return ((void*)desti);
}
