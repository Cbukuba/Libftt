/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:23:32 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/17 16:22:20 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c ++;
	}
	return (c);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		end;
	int		str_lng;
	int		lng;

	start = 0;
	while (set[start] == s1[start] && s1[start])
		start ++;
	end = 0;
	lng = ft_strlen(s1);
	while (set[end] == s1[lng - 1])
		end ++;
	str_lng = lng - end - start;
	str = malloc(sizeof(char) * (str_lng + 1));
	while (start < str_lng)
		str[i ++] = s1[start ++];
	return (str);
}

#include <stdio.h>
int main()
{
	char	*str = "   xxxWassup";
	char	*set = " x";

	printf("original :%s\nStrtrim :%s", str, ft_strtrim(str, set));
}

