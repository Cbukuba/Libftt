/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:22:29 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 16:31:14 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*new_dst;
	char	*new_src;

	new_dst = (char *)dst;
	new_src = (char *)src;
	i = len;
	if (new_src < new_dst)
		while (i--)
			new_dst[i] = new_src[i];
	else
		ft_memcpy (dst, src, len);
	return (dst);
}

// #include <stdio.h>
// int main()
// {
// 	char s1[200] = "Hello my dear";
// 	char s2[7] = "wassup";
// 	char s3[20] = "Hello my dear";
// 	char s4[7] = "wassup";
// 	ft_memmove(s3 + 5, s4, 15);
// 	memmove(s1 + 5, s2, 15);
// 	printf("%s\n%s", s1, s3);
// }
