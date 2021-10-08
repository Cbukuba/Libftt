/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:30:55 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/08 17:19:13 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char src, size_t len)
{
	int				i;
	int				j;

	i = 0;
	while (dest[i] != '\0')
		i ++;
	j = 0;
	while (j < len)
	{
		dest[i + j] = src;
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	myitoa(int c)
{
	int	i;
	char	ent;

	i = 0;
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

#include <string.h>
#include <stdio.h>
int main()
{
    char data[30];
    printf("%s\n", data);
    ft_memset(data, 'b', 10);
    printf("%s", data);
}