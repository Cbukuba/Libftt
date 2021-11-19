/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:41:56 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/19 09:46:17 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		len;

	start = 0;
	while (find_in_set(s1[start], set) && s1[start])
		start ++;
	len = ft_strlen(s1);
	while (find_in_set(s1[len - 1], set) && len > start)
		len --;
	str = malloc(sizeof(char) * (len - start + 1));
	i = 0;
	while (start < len)
		str[i ++] = s1[start ++];
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char	*str = "   xxxWassup";
// 	char	*set = " x";

// 	printf("original :%s\nStrtrim :%s", str, ft_strtrim(str, set));
// }
