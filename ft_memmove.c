/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 14:44:33 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 04:15:20 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*str;
	char		*desti;
	char		*temp;
	size_t		i;

	i = 0;
	str = src;
	desti = dest;
	temp = dest;
	if (str == 0 && desti == 0)
		return (0);
	if (n == 0)
		return (desti);
	while (i < n)
	{
		if (str == temp)
			i += 1;
		temp[i] = str[i];
		i++;
	}
	return (desti);
}

/*int		main()
{
	printf("%s", ft_memmove("cestok", "cestpasok", 5));
	printf("%s", memmove("cestok", "cestpasok", 5));
	return (0);
}*/
