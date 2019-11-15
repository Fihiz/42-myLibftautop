/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/14 12:44:59 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 02:56:23 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t ind;

	i = 0;
	ind = 0;
	while (dst[i])
		i++;
	if (size == 0)
		return (ft_strlen(src));
	if (ft_strlen(dst) >= size)
		return (ft_strlen(src) + size);
	while (src[ind] && (i + ind + 1) < size)
	{
		dst[i + ind] = src[ind];
		ind++;
	}
	dst[i + ind] = '\0';
	return (ft_strlen(dst - 1) + ft_strlen(src));
}
