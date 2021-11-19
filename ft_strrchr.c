/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:05:20 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/19 18:07:43 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
		i ++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (str + i);
		i --;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	const char str[] = "Hello world ogv";
// 	int c = 'o';
// 	printf("%s\n%s", strrchr(str, c), ft_strrchr(str, c));
// }
