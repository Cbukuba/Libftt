/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 22:23:28 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/02 09:44:15 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, const char *src)
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

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c ++;
	return (c);
}

int	ft_lng(int size, const char **strng, const char *del)
{
	int	i;
	int	lng;

	i = 0;
	lng = 0;
	while (i < size)
	{
		lng += ft_strlen(strng[i]);
		i ++;
	}
	lng += (size - 1) * ft_strlen(del) + 1;
	return (lng);
}

char	*link(char *str, const char **strs, const char *sep, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i ++;
	}
	return (str);
}

char	*ft_strjoin(const char **strs, const char *sep)
{
	char	*str;
	int		size;

	size = 0;
	while (strs[size][0])
		size ++;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (0);
	}
	str = malloc(sizeof(char) * ft_lng(size, strs, sep));
	if (!str)
		return (0);
	link(str, strs, sep, size);
	return (str);
}

// #include <stdio.h>
// int    main(void)
// {
//     const char    *array[] = {"H", "E", "L", "L", "O", "\0"};
//     const char    *del = "-";
// 	int        size = sizeof(array) / sizeof(*array);
//     char    *ret;
// 	int		i = 0;

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