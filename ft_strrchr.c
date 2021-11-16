/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:05:20 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 18:41:30 by cbukuba          ###   ########.fr       */
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
	while (str[i] != c && i >= 0)
		i --;
	if (str[i] == c)
		return (str + i);
	else if ((c - 256) > 0)
		return (str);
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