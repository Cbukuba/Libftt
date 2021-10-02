/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 14:15:30 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/02 14:47:05 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

typedef unsigned long	t_size;

t_size	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c ++;
	}
	return (c);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "";
// 	int result = ft_strlen(str);
// 	printf("%d", result);
// }