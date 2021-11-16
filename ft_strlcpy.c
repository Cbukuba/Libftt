/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:51:59 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 13:25:48 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst,
					const char *src, size_t dstsize )
{
	size_t	i;
	size_t	lng;

	if (dstsize > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i ++;
		}
		dst[i] = '\0';
	}
	lng = 0;
	while (src[lng])
		lng ++;
	return (lng);
}

// #include <stdio.h>
// #include <string.h>

// void test(int size)
// {
//     char string[] = "Hello there, Venus";
//     char buffer[19];
//     int r;

//     r = ft_strlcpy(buffer,string,size);

//     printf("Copied '%s' into '%s', length %d\n",
//             string,
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
