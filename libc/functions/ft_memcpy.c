/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:17:51 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/12 09:56:57 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*new_dst;
	char	*new_src;

	new_dst = (char *)dst;
	new_src = (char *)src;
	i = 0;
	while (i < n)
	{
		new_dst[i] = new_src[i];
		i ++;
	}
	return (dst);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//   char s1[] = "Hello";
//   char s2[] = "Hello";
//   memcpy(s1,s2,3);
//   printf("%s\n", s1);
//   char s3[]= "Hello";
//   char s4[]= "Hello";
//   ft_memcpy(s3,s4,3);
//   printf("%s", s3);
// }