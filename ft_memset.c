/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:35:56 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/19 09:35:58 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cmp;
	unsigned char	*p;

	if (!b)
		return (NULL);
	p = (unsigned char *)b;
	cmp = 0;
	while (cmp < len)
		p[cmp++] = (unsigned char)c;
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
