/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:27:38 by wpicanci          #+#    #+#             */
/*   Updated: 2023/10/10 15:27:40 by wpicanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	j = 0;
	if (ft_strlen(dest) > size)
		temp = ft_strlen(src) + size;
	else
		temp = ft_strlen(src) + ft_strlen(dest);
	while (dest[i])
		i++;
	while ((i + 1) < size && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (temp);
}
/*
#include <bsd/string.h>
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	src[] = "123456789";
	char	dst[]= "1011121314";

	ft_strlcat (dst, src, 10);
	puts (dst);

	char	src2[] = "123456789";
	char	dst2[]= "1011121314";

	strlcat (dst2, src2, 10);
	puts (dst2);
}*/