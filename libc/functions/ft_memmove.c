/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:22:29 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/11 11:25:45 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// void *ft_memmove(void *dst, const void *src, size_t len)
// {
// 	int		i;
// 	int		y;
// 	char	*new_dst;
// 	char	*new_src;

// 	new_dst = (char *)dst;
// 	new_src = (char *)src;
	
// }

#include <string.h>
#include <stdio.h>
int main()
{
  char s1[20] = "Hello";
  char s2[50] = "      worldryryeyt";
  memcpy(s1,s2,10);
  printf("%s\n", s1);
//   char s3[]= "Hello";
//   char s4[]= "worlderwtry";
//   ft_memcpy(s3,s4,10);
//   printf("%s", s3);
}