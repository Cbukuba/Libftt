/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:57:45 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/08 18:11:20 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(s + i) = '\0';
		i ++;
	}
	return ;
}

#include <stdio.h>

int main()
{
	char s[] = "Wassup youtube";
	ft_bzero(s, 3);
	printf("%s", s);
}