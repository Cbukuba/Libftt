/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:03:37 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/15 12:56:44 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static	char	*rev_string(char *str)
{
	int	i;
	int	y;
	int	size;

	size = ft_strlen(str) - 1;
	i = 0;
	while (i < size)
	{
		y = str[i];
		str[i] = str[size];
		str[size] = y;
		i ++;
		size --;
	}
	return (str);
}

static	int	intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i ++;
	while (n != 0)
	{
		n /= 10;
		i ++;
	}
	return (i);
}

static	char	*convert(int n, char *str)
{
	int	res;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (n < 0)
	{
		n = -n;
		j = 1;
	}
	while (n != 0)
	{
		res = n % 10;
		if (res >= 10)
			str[i++] = (res - 10) + 'a';
		str[i++] = res + '0';
		n /= 10;
	}
	if (j == 1)
		str[i++] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = intlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	convert(n, str);
	str[len + 1] = '\0';
	rev_string(str);
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%s\n", ft_itoa(-34245));
// }