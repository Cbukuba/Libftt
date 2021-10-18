/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:22:29 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/18 08:43:58 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//libft.h "ft_memcpy"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	int		y;
	char	*new_dst;
	char	*new_src;
	char	*buffer_temp;

	new_dst = (char *)dst;
	new_src = (char *)src;
	if (new_src > new_dst)
	{	
		*new_dst = *buffer_temp;
		*buffer_temp = *new_src;
	}
	memcpy (dst, src, len);
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
