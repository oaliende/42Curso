/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaliende <oaliende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:58:47 by oaliende          #+#    #+#             */
/*   Updated: 2023/03/09 21:00:24 by oaliende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}	
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/* int main()
{
  	char str[] = "hola";
  	char strDest[] = "adios";
	printf("%s", str);
   	printf("\n");
  	printf("%s", strDest);
	printf("\n");
	printf("%zu", ft_strlcpy(strDest, str, 2));
	printf("\n");
  	printf("%s", str);
   	printf("\n");
  	printf("%s", strDest);
} */