/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/14 12:44:59 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/14 13:09:50 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int pos;
	int pos2;

	pos = 0;
	pos2 = 0;
	while (src[pos] && pos < size)
		pos++;
	while (dst[pos2])
		pos2++;

	return (0);
}
