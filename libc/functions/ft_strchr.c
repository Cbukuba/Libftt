/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:16:23 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/18 11:02:33 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strchr(const char *s, int c)
{
	int	i;
	char	*str;
	char	*p;

	str = (char *)s;
	i = 0;
	while (str[i] != c && str[i])
		i++;
	if (str[i] == c)
		return (str + i);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	const char str[] = "Hello world";
// 	int c = '\0';
// 	printf("%s%s", strchr(str, c), ft_strchr(str, c));
// }