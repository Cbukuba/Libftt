/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:22:29 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/12 11:33:48 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// manqu les conditions basiques (quand il n y a pas de overlap)
#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	int		y;
	char	*new_dst;
	char	*new_src;
	char	buffer_temp[2];

	new_dst = (char *)dst;
	new_src = (char *)src;
	i = 0;
	if (new_src > new_dst)
	{
		new_src[i] = buffer_temp[i];
		buffer_temp[i] = new_dst[i];
		i ++;
	}
	if (new_src <= new_src)
		return memcpy(dst, src, len);

	return dst;
}

#include <string.h>
#include <stdio.h>
int main()
{
  char s1[20] = "Hello my dear";
  char s2[50] = "wassup youtube maadou gangseuleu";
  char *p = ft_memmove (s1 + 4,s2, 16);
  char *u = memmove (s1 + 4,s2, 16);
  printf("%s\n%s", u, p);
}