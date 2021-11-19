/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:38:19 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/19 14:50:05 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (str + i);
		i ++;
	}
	if (str[i] == (char)c)
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
