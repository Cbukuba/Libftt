/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:39:16 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/15 16:22:44 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	const char		*str1;
	const char		*str2;

	i = 0;
	str1 = (const char *)s1;
	str2 = (const char *)s2;
	while (str1[i] != '\0' && str2[i] != '\0'
		&& (str1[i] == str2[i]) && i < n - 1 )
		i++;
	if (n <= 0)
		return (0);
	else if ((str1[i] - str2[i]) == 0)
		return (0);
	else if ((str1[i] - str2[i]) > 0)
		return (1);
	else
		return (-1);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     printf("1: ft_memcmp:  %d\n", ft_memcmp("aaa", "aaa", 20));
//     printf("      memcmp:  %d\n", memcmp("aaa", "aaa", 20));
//     printf("2: ft_memcmp:  %d\n", ft_memcmp("aaa", "aaA", 20));
//     printf("      memcmp:  %d\n", memcmp("aaa", "aaA", 20));
//     printf("3: ft_memcmp: %d\n", ft_memcmp("aaaaaaaa", "aab", 20));
//     printf("      memcmp: %d\n", memcmp("aaaaaaaa", "aab", 20));
//     printf("4: ft_memcmp: %d\n", ft_memcmp("aaa", "aaabcd", 3));
//     printf("      memcmp: %d\n", memcmp("aaa", "aaabcd", 3));
//     printf("5: ft_memcmp: %d\n", ft_memcmp("aa0", "aab", 20));
//     printf("      memcmp: %d\n", memcmp("aa0", "aab", 20));
//     printf("6: ft_memcmp: %d\n", ft_memcmp("aa", "aab", 0));
//     printf("      memcmp: %d\n", memcmp("aa", "aab", 0));
//     printf("7: ft_memcmp: %d\n", ft_memcmp("", "aab", 20));
//     printf("      memcmp: %d\n", memcmp("", "aab", 20));
//     printf("8: ft_memcmp:  %d\n", ft_memcmp("", "",-1));
//     printf("      memcmp:  %d\n", memcmp("", "", -1));
//     return (0);
// }