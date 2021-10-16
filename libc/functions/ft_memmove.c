/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:22:29 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/16 23:11:59 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// manqu les conditions basiques (quand il n y a pas de overlap)
#include <stdlib.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	int		y;
	char	*new_dst;
	char	*new_src;
	char	buffer_temp[3];

	new_dst = (char *)dst;
	new_src = (char *)src;
	i = 0;
	if (new_src > new_dst)
	{	
		new_dst[i] = buffer_temp[i];
		buffer_temp[i] = new_src[i];
		i ++;
	}
	memcpy(dst,src,len);
	return dst;
}

#include <stdio.h>
int main()
{
	char s1[20] = "Hello my dear";
	char s2[50] = "wassup youtube maadou gangseuleu";
	char s3[20] = "Hello my dear";
	char s4[50] = "wassup youtube maadou gangseuleu";
	ft_memmove(s3, s4, 15);
	memmove(s1, s2, 15);
	printf("%s\n%s", s1, s3);
}
