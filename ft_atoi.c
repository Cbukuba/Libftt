/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:16:46 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 20:08:08 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_atoi(const char *str)
// {
// 	int	i;
// 	int	sign;
// 	int	ent;
// 	int	new_ent;

// 	i = 0;
// 	sign = 1;
// 	ent = 0;
// 	if (str[0] == '-')
// 	{
// 		sign *= -1 ;
// 		i ++;
// 	}	
// 	while (str[i] >= 48 && str[i] <= 57)
// 	{
// 		new_ent = ent * 10 + (str[i] - 48);
// 		i ++;
// 		ent = new_ent;
// 	}
// 	return (ent * sign);
// }

int	ft_atoi(char const *str)
{
	int	i;
	int	sign;
	int	ent;

	i = 0;
	sign = 1;
	ent = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1 ;
		i ++;
		if (str[i] == '+' || str[i] == '-')
			return (0);
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		ent = ent * 10 + (str[i] - 48);
		i ++;
	}
	return (ent * sign);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", atoi("-+42" ));
// 	printf("%d", ft_atoi("-+42" ));
// }