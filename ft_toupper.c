/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:48:00 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 13:24:09 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int main()
// {
// 	unsigned char c = 'A';
// 	printf("%c\n%c", ft_toupper(c), toupper(c));
// }