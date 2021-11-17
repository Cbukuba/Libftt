/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:23:32 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/17 16:58:11 by cbukuba          ###   ########.fr       */
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

int	find_in_set(char c, char const *set)
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
	int		end;

	start = 0;
	while (find_in_set(s1[start], set) && s1[start])
		start ++;
	end = ft_strlen(s1);
	while (find_in_set(s1[end - 1], set) && end > start)
		end --;
	str = malloc(sizeof(char) * (end - start + 1));
	i = 0;
	while (start < end)
		str[i ++] = s1[start ++];
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int main()
{
	char	*str = "   xxxWassup";
	char	*set = " x";

	printf("original :%s\nStrtrim :%s", str, ft_strtrim(str, set));
}*/
