/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/22 17:16:57 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 17:13:30 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int len;

	i = 0;
	while (s[i])
		i++;
	len = i;
	i = 0;
	while (s[i])
	{
		if (s[len] == c)
			return ((char *)s + len);
		len--;
		i++;
	}
	if (c == 0)
		return ((char *)s + len);
	return (0);
}
