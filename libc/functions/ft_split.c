/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:51:21 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/03 18:31:47 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	while (*s)
	{		
		if (s[i] == c)
			j ++;
		i ++;
	}
	j ++;
	printf("%d", j);
	tab = malloc(sizeof(char) * j);
	if (!tab)
		return (NULL);
	i = 0;
	j = 1;
	k = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			tab[j][k] = s[i];
			i ++;
			k ++;
		}
		i ++;
		j ++;
	}
	tab[j][i] = '\0';
	free (tab);
	return (tab);
 }



int main()
{
	char const	*str = "Wassup-Youtube-Maadou-Gangseuleu";
	char	del = '-';
	// char	**tab = 
	ft_split(str, del);
	// printf("%s\n", tab[1]);
}