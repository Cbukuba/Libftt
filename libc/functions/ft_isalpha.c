/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 11:14:41 by cbukuba           #+#    #+#             */
/*   Updated: 2021/10/02 12:15:14 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	c += '0';
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// #include<stdio.h> 
// #include<stdlib.h> 

// int main() 
// { 
//     char str[5] = {'%','&','7','A','t'}; 
//     int arr[5]={0,0,0,0,0}; //to place the return values of all 
//                             //characters stored in str array.

//     for (int i=0;i<5;i++)
//     {
//       arr[i]= ft_isalpha(str[i]);
//     }
//     for (int i=0;i<5;i++)
//     {
//       printf( "\nCharacter ");
//       printf("%c", str[i]);
//       if (arr[i]!=0)
//       printf( " is an Alphabetic");
//       else  printf( " is NOT an Alphabetic");
//     }
//     return 0; 
// }