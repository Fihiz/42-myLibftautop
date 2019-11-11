/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/11 17:17:54 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/11 17:26:20 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t i)
{
	while (((char*)s1)[i] || ((char*)s2)[i])
	{
		if (((char*)s1)[i] > ((char*)s2)[i] || ((char*)s2)[i] == 0)
			return (1);
		if (((char*)s1)[i] < ((char*)s2)[i] || ((char*)s1)[i] == 0)
			return (-1);
		i++;
	}
	return (0);
}
