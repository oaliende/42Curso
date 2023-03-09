/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaliende <oaliende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:51:40 by oaliende          #+#    #+#             */
/*   Updated: 2023/03/09 21:00:24 by oaliende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* int	main(void)
{
	char  *str;
	
	str = "holijefoisdja";
	printf("%d\n", ft_strlen(str));
	//puts(fhds);
	printf("la de verdad %lu\n", strlen(str));
} */