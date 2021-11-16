/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:30:55 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 14:33:28 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcat(char *dest, char src, size_t len)
{
	size_t	j;

	j = 0;
	while (j < len)
	{
		dest[j] = src;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cmp;
	unsigned char	*p;

	if (!b)
		return (NULL);
	p = (unsigned char *)b;
	cmp = 0;
	while (cmp < len)
	{
		p[cmp] = (unsigned char)c;
		cmp ++;
	}
	return (b);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char data[30];
//     ft_memset(data, 'B', 10);
//     printf("%s\n", data);
//     memset(data, 'B', 10);
//     printf("%s", data);
// }