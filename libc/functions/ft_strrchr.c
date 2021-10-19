/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:05:20 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/19 13:07:27 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*str;
	char	*p;

	str = (char *)s;
	i = 0;
	j = 0;
	while (str[i])
		i ++;
	while (str[i] != c && i >= 0)
		i --;
	if (str[i] == c)
		return (str + i);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	const char str[] = "Hello world ogv";
// 	int c = 'p';
// 	printf("%s\n%s", strrchr(str, c), ft_strrchr(str, c));
// }