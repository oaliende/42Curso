/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaliende <oaliende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:14:11 by oaliende          #+#    #+#             */
/*   Updated: 2023/03/09 21:00:24 by oaliende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/* 
#include <stdio.h>
int	main(void)
{
	void *s;
	size_t n;

	s = "hola que tal";
	n = 4;
	printf("fake, %s\n", ft_bzero(s, n));

	void *s2;
	size_t n2;

	s2 = "hola que tal";
	n2 = 4;
	printf("real, %s\n", bzero(s2, n2));
	return 0;
	//while (n-- > 0) ó while (i < n)
	//char *cs | cs = (char *)s; o ((char *)s)[i] = 0;
} */