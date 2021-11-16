/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:07:25 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 13:25:56 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	cmp;

	cmp = 0;
	while (src[cmp])
		cmp ++;
	if (dstsize > 0)
	{
		i = 0;
		while (dst[i] != '\0')
			i ++;
		j = 0;
		while (src[j] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[j];
			i ++;
			j ++;
		}
		dst[i] = '\0';
	}
	if (dstsize == cmp)
		return (dstsize);
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