/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 22:23:28 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/31 22:26:00 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
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

int	ft_lng(int size,char **strng,char *del)
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

#include <stdio.h>
char	*ft_strjoin(const char **strs,const char *sep)
{
	int		i;
	char	*str;
	int		size;
	char	**strng;
	char	*del;

	strng = (char **)strs;
	del = (char *)sep;
	size = sizeof(strs) / sizeof(*strs);
	printf("%d\n", size);
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (0);
	}
	str = malloc(sizeof(char) * ft_lng(size, strng, del));
	if (!str)
		return (0);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strng[i]);
		if (i < size - 1)
			ft_strcat(str, del);
		i ++;
	}
	return (str);
}


int    main(void)
{
    const char    *array[] = {"H", "E", "L", "L", "O", "\0"};
    const char    *del = "-";
	int        size = sizeof(array) / sizeof(*array);
    char    *ret;
	int		i = 0;

	printf("%d\n", size);
    ret = ft_strjoin(array, del);
    if (!ret)
        printf("NULL!!\n");
    else if (!size)
    {
        free(ret);
        printf("FREE!!\n");
    }
    else
    {
        printf("ret = |%s|\n", ret);
        free(ret);
    }
    return (0);
}