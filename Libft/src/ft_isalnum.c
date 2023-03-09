/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaliende <oaliende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:54:49 by oaliende          #+#    #+#             */
/*   Updated: 2023/03/09 21:00:24 by oaliende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalnum(int num)
{
	if ((num >= 'a' && num <= 'z')
		|| (num >= 'A' && num <= 'Z')
		|| (num >= '0' && num <= '9'))
		return (1);
	return (0);
}

/* int	main(void)
{
	int	num;

	num = 72;
	printf("%d", ft_isalnum(num));
}
 */