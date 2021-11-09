/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:51:21 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/09 21:52:42 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c ++;
	return (c);
}

char	*ft_strcpy(char *dest, char const *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (i <= len)
	{
		str[i] = s[start + i];
		i ++;
	}
	return (str);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	*p;

	str = (char *)s;
	i = 0;
	while (str[i])
		i ++;
	while (str[i] != c && i >= 0)
		i --;
	if (str[i] == c)
		return (str + i + 1);
	return (NULL);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	*p;

	str = (char *)s;
	i = 0;
	while (str[i] != c && str[i])
		i++;
	if (str[i] == c)
		return (str + i + 1);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	**tab;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{		
		if (s[i] == c)
			j ++;
		i ++;
	}
	j ++;
	i = 0;
	k = 0;
	tab = malloc(sizeof(char *) * j);
	if (!tab)
		return (NULL);
	while (i ++ <= j)
	{
		l = 0;
		while (s[k] != c)
		{
			k ++;
			l ++;
		}
		tab[i] = malloc(sizeof(char) * l);
		printf("k = %d\n\tl = %d\n", k, l);
		if (i == j + 1)
			ft_strcpy(tab[i], ft_strrchr(s, c));
		else
			ft_strcpy(tab[i], ft_substr(s, k, l));
		k ++;
	}
	free (tab);
	return (tab);
}

int main()
{
	char const	*str = "Wassup-Youtube-Maadou-Gangseuleu";
	char	del = '-';
	char **tab = ft_split(str, del);
	int i = 1;
	while (i ++ <= 4)
		printf("%s\n", tab[i]);
}