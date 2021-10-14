/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:17:51 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/14 20:22:19 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char	*new_dst;
	char	*new_src;

	new_dst = (char *)dst;
	new_src = (char *)src;
	i = 0;
	while (new_src[i] && i < n)
	{
		new_dst[i] = new_src[i];
		i ++;
	}
	new_dst[i] = '\0';
	return (dst);
}

#include <string.h>
#include <stdio.h>
int main()
{
  char s1[]= "Hello--world";
  memcpy(s1 + 6,s1 + 7,7);
  printf("%s\n", s1);
  char s3[]= "Hello--world";
  ft_memcpy(s3 + 6,s3 + 7,7);
  printf("%s", s3);
}