/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:16:46 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/07 18:04:49 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	ent;

	i = 0;
	sign = 1;
	ent = 0;
	if (str[0] == '-')
		sign *= -1 ;
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		ent = ent * 10 + (str[i] - 48);
		i ++;
	}
	return (ent * sign);
}

#include <stdio.h>

int main()
{
	printf("%d\n", atoi("2147483648" ));
	printf("%d", ft_atoi("2147483648" ));
}