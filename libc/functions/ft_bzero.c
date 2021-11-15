/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:57:45 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/15 12:52:07 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_memset(s, '\0', n);
		i ++;
	}
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s[20] = "";
// 	ft_bzero(s, 3);
//     printf("%s\n\n\n", s);
//     char s2[20] = "";
//     bzero(s2, 3);
//     printf("%s\n", s2);
// }