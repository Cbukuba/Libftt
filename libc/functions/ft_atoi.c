/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:16:46 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/08 15:03:58 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	ent;
	int	new_ent;

	i = 0;
	sign = 1;
	ent = 0;
	if (str[0] == '-')
	{
		sign *= -1 ;
		i ++;
	}	
	while (str[i] >= 48 && str[i] <= 57)
	{
		new_ent = ent * 10 + (str[i] - 48);
		i ++;
		ent = new_ent;
	}
	return (ent * sign);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", atoi("2147483648567" ));
// 	printf("%d", ft_atoi("2147483648567" ));
// }