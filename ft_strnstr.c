/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:52:11 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/15 16:19:11 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #if defined(LIBC_SCCS) && !defined(lint)
// static char sccsid[] = "@(#)strstr.c	8.1 (Berkeley) 6/4/93";
// #endif /* LIBC_SCCS and not lint */
// #include <sys/cdefs.h>

// #include <string.h>

// /*
//  * Find the first occurrence of find in s, where the search is limited to the
//  * first slen characters of s.
//  */
// char *
// strnstr(const char *s, const char *find, size_t slen)
// {
// 	char c, sc;
// 	size_t len;

// 	if ((c = *find++) != '\0') {
// 		len = strlen(find);
// 		do {
// 			do {
// 				if (slen-- < 1 || (sc = *s++) == '\0')
// 					return (NULL);
// 			} while (sc != c);
// 			if (len > slen)
// 				return (NULL);
// 		} while (strncmp(s, find, len) != 0);
// 		s--;
// 	}
// 	return ((char *)s);
// }

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t		i;
	size_t		j;
	char	*str;
	char	*to_find;

	str = (char *)haystack;
	to_find = (char *)needle;
	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0' && i < (n - 1))
	{	
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j ++;
		}
		i ++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hello world ca dit quoi?";
// 	char c [] = "dit";
// 	printf("%s\n%s", strnstr(str, c, strlen(str)), 
// 	ft_strnstr(str, c, strlen(str)));
// }