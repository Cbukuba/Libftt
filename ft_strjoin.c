/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:39:21 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/20 00:08:26 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcat(char *dest, char const *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i ++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

static char	*str_link(char *str, char const *s1, char const *s2)
{
	int	i;
	int	lng1;
	int	lng2;

	lng1 = ft_strlen(s1);
	lng2 = ft_strlen(s2);
	i = 0;
	ft_strcat(str, s1);
	while (i < lng2)
	{
		str[lng1] = s2[i];
		lng1 ++;
		i ++;
	}
	str[lng1] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		lng1;
	int		lng2;

	if (!s1 || !s2)
		return (NULL);
	lng1 = ft_strlen(s1);
	lng2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (lng1 + lng2 + 1));
	if (!str)
		return (0);
	*str = 0;
	str_link(str, s1, s2);
	return (str);
}

// #include <stdio.h>
// int    main(void)
// {
//     const char    *array[] = {"H", "E", "L", "L", "O", "\0"};
//     const char    *del = "-";
// 	int        size = sizeof(array) / sizeof(*array);
//     char    *ret;

//     ret = ft_strjoin(array, del);
//     if (!ret)
//         printf("NULL!!\n");
//     else if (!size)
//     {
//         free(ret);
//         printf("FREE!!\n");
//     }
//     else
//     {
//         printf("ret = |%s|\n", ret);
//         free(ret);
//     }
//     return (0);
// }
