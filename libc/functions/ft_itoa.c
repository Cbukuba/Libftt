/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:03:37 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/13 22:34:34 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*rev_string(int size, char *str)
{
	int	i;
	int	y;
	int	c;

	c = 0;
	while (c ++ < size / 2)
	{
		i = 0;
		while (i < size / 2)
		{
			y = str[i];
			str[i] = str[size - 1];
			str[size - 1] = y;
			i ++;
			size --;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		res;
	int		j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * 8);
	if (n < 0)
	{
		n = - n;
		j = 1;
	}
	while (n != 0)
	{
		res = n % 10;
		if (res >= 10)
			str[i] = (res - 10) + 'a';
		else
			str[i] = res + '0';
		n = n / 10;
		i ++;
	}
	if (j > 0)
		str[i] = '-';
	rev_string(i, str);
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(-34245));
}