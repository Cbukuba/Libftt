/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:51:02 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 13:26:16 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		lng;
	char	*p;

	lng = 0;
	while (s[lng] != '\0')
		lng ++;
	p = (char *)malloc(sizeof(char) * lng + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < lng)
	{
		p[i] = s[i];
		i ++;
	}
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	const char s[] = "";
// 	printf("Source :    %s\n", s);
// 	printf("ft_strdup : %s\n", ft_strdup(s));
// 	printf("strdup :    %s\n", strdup(s));
// }