/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 18:45:18 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 13:16:47 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (((unsigned char)s1[i] || (unsigned char)s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i] ||
				(unsigned char)s2[i] == '\0')
			return (1);
		if ((unsigned char)s1[i] < (unsigned char)s1[i] || 
				(unsigned char)s1[i] == '\0')
			return (-1);
		i++;
	}
	return (0);
}
