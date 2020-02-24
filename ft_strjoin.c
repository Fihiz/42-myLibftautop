/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:02:22 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 15:24:27 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ind;
	size_t	len;
	char	*concat;

	i = -1;
	ind = -1;
	len = ft_strlen(s1);
	if (s1 == 0 ||
		!(concat = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (++i < len)
		concat[i] = s1[i];
	while (s2[++ind])
		concat[i + ind] = s2[ind];
	concat[i + ind] = '\0';
	return (concat);
}
