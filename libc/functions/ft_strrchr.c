/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:05:20 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/18 14:09:30 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*str;
	char	*p;

	str = (char *)s;
	i = 0;
	j = 0;
	while (str[j])
	{
		while (str[i] != c && str[i])
		{
			i++;
		}
		j ++;
		i = j + 1;
	}
	return (str + i);
}

#include <string.h>
#include <stdio.h>
int main()
{
	const char str[] = "Hello world";
	int c = 'o';
	printf("%s\n%s", strrchr(str, c), ft_strrchr(str, c));
}