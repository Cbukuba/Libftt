/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:41:21 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/19 14:38:53 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((s2[0] == '\0' && n < 1) || n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]) && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     printf("1: ft_strncmp:  %d\n", ft_strncmp("aaa", "aaa", 20));
//     printf("      strncmp:  %d\n", strncmp("aaa", "aaa", 20));
//     printf("2: ft_strncmp:  %d\n", ft_strncmp("aaa", "aaA", 20));
//     printf("      strncmp:  %d\n", strncmp("aaa", "aaA", 20));
//     printf("3: ft_strncmp: %d\n", ft_strncmp("aaaaaaaa", "aab", 20));
//     printf("      strncmp: %d\n", strncmp("aaaaaaaa", "aab", 20));
//     printf("4: ft_strncmp: %d\n", ft_strncmp("aaa", "aaabcd", 3));
//     printf("      strncmp: %d\n", strncmp("aaa", "aaabcd", 3));
//     printf("5: ft_strncmp: %d\n", ft_strncmp("aa0", "aab", 20));
//     printf("      strncmp: %d\n", strncmp("aa0", "aab", 20));
//     printf("6: ft_strncmp: %d\n", ft_strncmp("aa", "aab", 0));
//     printf("      strncmp: %d\n", strncmp("aa", "aab", 0));
//     printf("7: ft_strncmp: %d\n", ft_strncmp("", "aab", 20));
//     printf("      strncmp: %d\n", strncmp("", "aab", 20));
//     printf("8: ft_strncmp:  %d\n", ft_strncmp("", "",-1));
//     printf("      strncmp:  %d\n", strncmp("", "", -1));
//     return (0);
// }
