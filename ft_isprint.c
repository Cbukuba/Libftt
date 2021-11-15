/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:13:35 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/15 12:55:42 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main()
// {
//     char c = '\n';
//     if (ft_isprint(c) == 1)
//         printf("Carre");
//     else
//         printf("hanhan");
// }