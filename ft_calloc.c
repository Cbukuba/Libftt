/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:09:18 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/19 14:37:22 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = nmemb * size;
	ptr = 0;
	ptr = malloc(i);
	if (ptr == NULL)
		return (NULL);
	while (i--)
		ptr[i] = 0;
	return ((void *)ptr);
}
