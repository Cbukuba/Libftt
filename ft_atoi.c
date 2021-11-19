/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:34:10 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/19 21:38:59 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*CHECK TEST-UNIT*/

#include "libft.h"

int	ft_atoi(char const *str)
{
	int				i;
	int				sign;
	unsigned int	ent;

	i = 0;
	sign = 1;
	ent = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i ++;
	if (str[i] == '-')
		sign *= -1 ;
	i ++;
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i] >= 48 && str[i] <= 57)
	{
		ent = ent * 10 + (str[i] - 48);
		if (ent >= 2147483647 && sign == 1)
			return (-1);
		else if (ent > 2147483647  && sign == -1)
			return (0);
		i ++;
	}
	return (ent * sign);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", atoi("-92233720368547758051"));
// 	printf("%d", ft_atoi("-92233720368547758051"));
// }
