/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:07:25 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/05 11:28:23 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// condition auqnd dstsize == taille buffer
#include <stdlib.h>


size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;
	int	j;

	if (dstsize > 0)
	{
		i = 0;
		while (dst[i] != '\0')
			i ++;
		j = 0;
		while (src[j] != '\0')
		{
			dst[i + j] = src[j];
			j++;
		}
	dst[i + j] = '\0';
	}
	if (src[dstsize] == '\0')
		return (i);
	if (dstsize == 0)
		return(i);
	return (i + (dstsize - 1));
}


#include <string.h>
#include <stdio.h>

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;
	
    r = ft_strlcat(string,buffer,size);
	
    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
