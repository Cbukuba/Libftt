/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:57:45 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/08 19:07:29 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ATTENTION IL FAUT FAIE LA LIBRAIRIE POUR POUVOIR INCLURE UNE FCT PARTOUT
#include <stdlib.h>

char	*ft_strcat(char *dest, char src, size_t len)
{
	int	i;
	int	j;

	j = 0;
	while (j < len)
	{
		dest[j] = src;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	myitoa(int c)
{
	char	ent;

	ent = c;
	return (ent);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cmp;

	cmp = 0;
	while (cmp < (len - 1))
	{
		if (c >= 32 && c <= 126)
		{
			ft_strcat(b, myitoa(c), len);
		}
		cmp ++;
	}
	return (b);
}

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

#include <stdio.h>

int main()
{
	void s[20] = "Hello world";
	ft_bzero(s, 3);
	printf("%s", s);
}