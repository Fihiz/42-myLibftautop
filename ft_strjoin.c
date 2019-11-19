/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 15:57:00 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 15:59:55 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ind;
	char	*concat;

	i = 0;
	ind = 0;
	if (s1 == 0 || !(concat = (char*)malloc(sizeof(char) * (ft_strlen(s1)
						+ ft_strlen(s2) + 1))))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[ind])
	{
		concat[i + ind] = s2[ind];
		ind++;
	}
	concat[i + ind] = '\0';
	return (concat);
}
