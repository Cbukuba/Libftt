/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:30:55 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/08 17:51:47 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char src, size_t len)
{
	int	i;
	int	j;

	j = 0;
	while (j < len)
	{
		dest[j] = src;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	myitoa(int c)
{
	char	ent;

	ent = c;
	return (ent);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cmp;

	cmp = 0;
	while (cmp < (len - 1))
	{
		if (c >= 32 && c <= 126)
		{
			ft_strcat(b, myitoa(c), len);
		}
		cmp ++;
	}
	return (b);
}

#include <string.h>
#include <stdio.h>
int main()
{
    char data[30];
    ft_memset(data, 'û', 10);
    printf("%s", data);
}