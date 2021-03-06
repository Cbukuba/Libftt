/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:37:44 by cbukuba           #+#    #+#             */
/*   Updated: 2022/01/24 10:10:28 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	word_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i ++;
		else
		{
			j ++;
			while (s[i] && s[i] != c)
				i ++;
		}
	}
	return (j);
}

static int	word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] == c)
		i ++;
	while (s[i] && s[i] != c)
	{
		i ++;
		len ++;
	}
	return (len);
}

static	char	**free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i ++;
	}
	free (tab);
	return (tab);
}

static	char	**make_tab(char **tab, char const *s, char c, int word_num)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	while (s[i] && k < word_num)
	{
		j = 0;
		l = word_len(s, c, i);
		tab[k] = malloc(sizeof(char) * (l + 1));
		if (!tab)
			free_tab (tab);
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
	int		len;

	if (!s)
		return (NULL);
	len = word_count(s, c);
	tab = malloc(sizeof(char *) * (len + 1));
	if (!tab)
		return (NULL);
	make_tab(tab, s, c, len);
	return (tab);
	free(tab);
}

// #include <stdio.h>
// int main()
// {
// 	char const	*str = "";
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
