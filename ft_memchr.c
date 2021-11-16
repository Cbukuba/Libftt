/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:17:28 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 17:17:44 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	void			*rvalue;

	rvalue = (void *)s;
	str = (unsigned char *)s;
	i = 0;
	while (n --)
	{
		if (str[i] != (unsigned char)c)
			s ++;
		else
			return ((unsigned char *)s);
		i++;
	}	
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *p;
// 	char *u;
// 	const char string[] = "Wassup youtube";
// 	const char search = 'e';

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

// int	main(void)
// {
// 	const void *s = "cc2555 555555555 555555555523a";

// 	if (memchr(s, 5, 20) == ft_memchr(s, 5, 20) 
// 		&& memchr(s, 5, 0) == ft_memchr(s, 5, 0)
// 		&& memchr(s, 8, 20) == ft_memchr(s, 8, 20)
// 		&& memchr(s, '\0', 20) == ft_memchr(s, '\0', 20)
// 		&& memchr(s, '\0', 40) == ft_memchr(s,'\0', 40))
// 	{
// 		printf("ft_memchr ok\n");
// 	}
// 	else
// 	{
// 		printf("\n|%s| |%p|\n", memchr(s, '\0', 20), memchr(s, '\0', 20));
// 		printf("%s %p\n", ft_memchr(s, '\0', 20), ft_memchr(s, '\0', 20));
// 		printf("\n|%s| |%p|\n", memchr(s, '5', 0), memchr(s, '5', 0));
// 		printf("%s %p\n", ft_memchr(s, '5', 0), ft_memchr(s, '5', 0));
// 		printf("\n|%s| |%p|\n", memchr(s, '\0', 40), memchr(s, '\0', 40));
// 		printf("%s %p\n", ft_memchr(s, '\0', 40), ft_memchr(s, '\0', 40));
// 		printf("\n|%s| |%p|\n", memchr(s, 5, 20), memchr(s, 5, 20));
// 		printf("%s %p\n", ft_memchr(s, 5, 20), ft_memchr(s, 5, 20));
// 		printf("\n|%s| |%p|\n", memchr(s, 8, 20), memchr(s, 8, 20));
// 		printf("%s %p\n", ft_memchr(s, 8, 20), ft_memchr(s, 8, 20));

// 		printf("\nft_memchr not ok\n");
// 	}

	
// 	// printf("%s %p\n", ft_memchr(NULL, '\0', 20), ft_memchr(NULL, '\0', 20));
// 	return (0);
// }