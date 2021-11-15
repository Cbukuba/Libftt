/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:17:28 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/15 12:57:04 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	void			*rvalue;

	rvalue = (void *)s;
	str = (unsigned char *)s;
	i = 0;
	while (str[i] != c && str[i] && i < (n - 1))
		i++;
	if (str[i] == c)
		return (rvalue + i);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *p;
// 	char *u;
// 	unsigned char string[] = "Wassup youtube";
// 	unsigned char search = 'e';

// 	u = (char *)ft_memchr(string, search, strlen(string));
// 	p = (char *)memchr(string, search, strlen(string));
// 	if ( p != NULL)
// 		printf("memchr : \nCaractère trouvé!\n'%s'\n", p);
// 	else
// 		printf("memchr : \nJ'ai pas trouvé mon reuf\n");
// 	if ( u != NULL)
// 		printf("ft_memchr : \nCaractère trouvé!\n'%s'", u);
// 	else
// 		printf("ft_memchr : \nJ'ai pas trouvé mon reuf");
// }