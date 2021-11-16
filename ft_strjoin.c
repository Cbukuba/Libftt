/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 22:23:28 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 20:42:22 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcat(char *dest, const char *src)
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
	dest[i + j] = '\0';
	return (dest);
}

static	int	ft_lng(int size, const char *strng, const char *del)
{
	int	i;
	int	lng;

	i = 0;
	lng = 0;
	while (i < size)
	{
		lng += ft_strlen(strng);
		i ++;
	}
	lng += (size - 1) * ft_strlen(del) + 1;
	return (lng);
}

static	char	*str_link(char *str,  char const *s1,  char const *s2)
{
	ft_strcat(str, s1);
	ft_strcat(str, s2);
	return (str);
}

char	*ft_strjoin(char const *s1,char const *s2)
{
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	// ajt hier
	if (s1 == NULL || s2 == NULL)
		return (0);
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