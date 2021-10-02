/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:51:59 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/02 17:30:53 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t	*ft_strlcpy(char * restrict dst, char const * restrict src, size_t dstsize )
{
	int				i;
	unsigned int	cmp;
	size_t			*lng;

	lng = 0;
	cmp = 0;
	i = 0;
	while (src[i] != '\0' && cmp < dstsize - 1)
	{
		dst[i] = src[i];
		i ++;
		cmp ++;
		while (src[i])
			lng ++;
	}
	dst[i] = '\0';
	return (lng);
}

#include <stdio.h>
int	main()
{
	char dst[] = "Wassup";
	const char  src[] = "MRFAYA";
	unsigned int n = 3;
    int i = 0;
    while (i < n - 1)
    {
        ft_strlcpy(dst, src, 3);
        write(1, &dst[i], 1);
        i++;
    }
}