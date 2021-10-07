/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:16:46 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/07 18:49:02 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Mettre commentaire en anglais
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
		sign *= -1 ;
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		new_ent = ent * 10 + (str[i] - 48);
		// condition pour les overflows
		// car quand on atteint int_max machine fait +1
		if (new_ent < ent)
			return (0);
		i ++;
		ent = new_ent;
	}
	return (ent * sign);
}

#include <stdio.h>

int main()
{
	printf("%d\n", atoi("6147483648" ));
	printf("%d", ft_atoi("6147483648" ));
}