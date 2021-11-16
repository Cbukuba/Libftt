/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:16:23 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 18:21:03 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while ( str[i] != (char)c && str[i])
		i++;
	if (str[i] == c || ((c - 256) > 0))
		return (str + i);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	const char str[] = "Hello world";
// 	int c = 'H' + 256;
// 	printf("%s\n%s", strchr(str, 'H' + 256), ft_strchr(str, 'H' + 256));
// 	printf("\n%c", c);
// }