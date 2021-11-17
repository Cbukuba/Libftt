/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:17:51 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 20:45:26 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*new_dst;
	unsigned char	*new_src;

	if (!dst || !src)
		return (NULL);
	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		new_dst[i] = new_src[i];
		i ++;
	}
	dst = (void *)new_dst;
	return (dst);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//   char s1[]= "Hello--world";
//   memcpy(s1 + 6,s1 + 7,7);
//   printf("%s\n", s1);
//   char s3[]= "Hello--world";
//   ft_memcpy(s3 + 6,s3 + 7,7);
//   printf("%s", s3);
// }