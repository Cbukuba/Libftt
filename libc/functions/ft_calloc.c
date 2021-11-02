/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:09:18 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/02 09:45:57 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	else if ((nmemb * size) > INT_MAX)
		exit (EXIT_FAILURE);
	ptr = (int *)malloc(nmemb * size);
	return (ptr);
}
