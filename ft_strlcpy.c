/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:40:20 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/19 09:43:54 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst,
					char const *src, size_t dstsize )
{
	size_t	i;
	size_t	lng;

	if (dstsize > 0)
	{
		i = 0;
		while (src[i] && i < dstsize - 1)
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
