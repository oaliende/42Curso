/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaliende <oaliende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:06:26 by oaliende          #+#    #+#             */
/*   Updated: 2023/03/09 21:00:24 by oaliende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		ch -= 32;
	}
	return (ch);
}

/* int	main(void)
{
	int	ch;

	ch = 'a';
	printf("%c", ft_toupper(ch));
}
 */