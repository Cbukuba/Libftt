/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:32:16 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/02 12:44:10 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char c = '2';
// 	if (ft_isdigit(c))
// 		printf("tonk\nnoice");
// 	else
// 		printf("Met un chiffre ah");
// }