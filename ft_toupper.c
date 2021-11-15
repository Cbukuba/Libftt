/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:48:00 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/18 09:06:34 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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