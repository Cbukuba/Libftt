/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:40:51 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/19 09:40:55 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c ++;
	return (c);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "hfjdjdghfkdldl";
// 	int result = ft_strlen(str);
// 	printf("%d", result);
// }
