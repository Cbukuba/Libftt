/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:51:21 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/18 10:38:32 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	word_count(char const *s, char c, int start)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (s[start])
	{
		if (s[start] == c)
			j ++;
		start ++;
	}
	while (s[i])
	{
		if (c == ' ' && s[i] == c)
			j ++;
		i ++;
	}
	return (j);
}

static	char	**make_tab(char **tab, char const *s, char c, int word_num)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	while (s[i] != '\0' && k <= word_num)
	{
		j = 0;
		l = word_count(s, c, i);
		tab[k] = malloc(sizeof(char) * (l + 1));
		if (!tab)
			return (NULL);
		while (s[i] && s[i] == c)
			i ++;
		while (s[i] && s[i] != c)
			tab[k][j++] = s[i++];
		tab[k][j] = '\0';
		k ++;
	}
	tab[k] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *) * (word_count(s, c, 0) + 1));
	if (!tab)
		return (NULL);
	make_tab(tab, s, c, word_count(s, c, 0));
	return (tab);
}

// #include <stdio.h>
// int main()
// {
// 	char const	*str = "Tripouille " ;
// 	char	del = ' ';
// 	char **tab = ft_split(str , del);
// 	int i = 0;
//     int j = 0;
//     int k = 0;

//     while (str[j])
//     {
//         if (str[j] == del)
//             k ++;
//         j ++;
//     }
// 	while (i <= k)
//     {
// 		printf("%s\n", tab[i]);
//         i ++;
//     }
// }