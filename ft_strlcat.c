/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:39:49 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/19 09:39:52 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	cmp;

	cmp = ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if (dstsize == 0)
		return (cmp);
	while (src[j] != '\0' && (i + j) < dstsize - 1)
	{
		dst[i + j] = src[j];
		j ++;
	}
	dst[i + j] = '\0';
	if (dstsize > i)
		return (i + cmp);
	return (cmp + dstsize);
}

// #include <string.h>
// #include <stdio.h>

// void test(int size)
// {
//     char string[] = "Hello there, Venus ";
//     char buffer[19];
//     int r;
//     r = strlcat(buffer,string,size);	
//     printf("'%s', length %d\n",
//             buffer,
//             r
//           );
// }
// int main()
// {
//     test(19);
//     test(10);
//     test(1);
//     test(0);
//     return(0);
// }
