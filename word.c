/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   word.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/24 11:39:52 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/24 13:06:54 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		count_words(char const *s, char sep)
{
    int i;
    int count;

    i = 0;
	count = 0;

    while (s[i])
	{
        if (s[0] != sep && i == 0)
            count++;
        if (s[i] != sep && s[i - 1] == sep)
            count++;
        i++;
	}
	return (count);
}

int main()
{
    char str[] = "    ";
    char sep = ' ';
    
    printf("%d\n", count_words(str, sep));
    return (0);
}