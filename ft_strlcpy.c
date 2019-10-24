/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/17 15:10:55 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/24 15:55:52 by sad-aude    ###    #+. /#+    ###.fr     */
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
	while (src[i] && i < (ft_strlen(dst - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (ft_strlen(src));

}
