/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:00:04 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/02 10:52:00 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (i <= len)
	{
		str[i] = s[start + i];
		i ++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *s = "blublup, Wassup Youtube";
// 	char *str = ft_substr(s, 7, 8);
// 	printf("%s", str);
// }