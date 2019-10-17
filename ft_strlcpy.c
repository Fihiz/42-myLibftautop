/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/17 15:10:55 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 15:25:14 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size == 0)
		return(ft_strlen(src));
	while (src[i] && i < dst - 1)
	{
		src[i] = dst[i];
		i++;
	}
	src[i] = dst[i];
	return (ft_strlen(src));

}
