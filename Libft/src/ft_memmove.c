/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaliende <oaliende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:07:08 by oaliende          #+#    #+#             */
/*   Updated: 2023/03/09 21:00:24 by oaliende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if (src <= dst)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
			i++;
		}	
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}	
	}
	return (dst);
}
/* 
#include <stdio.h>

int main() {
	char hola[11] = { "HolaBien" };
	char Oni[8] = { "Onintze" };

	printf("before : %s\n", hola);
	ft_memmove(hola, Oni, 5);
	printf("after : %s\n\n", hola);

	return 0;
}

    The memmove() function copies len bytes from string src to string dst.
    The two strings may overlap; 
	the copy is always done in a non-destructive manner.
	 */