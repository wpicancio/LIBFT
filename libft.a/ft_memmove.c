/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:46:33 by wpicanci          #+#    #+#             */
/*   Updated: 2023/10/09 16:46:36 by wpicanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (dest < src)
	{
		while (n--)
		{
			*d = *s;
			s++;
			d++;
		}
	}
	if (dest > src)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	src[5] = "hello";
	char	dest[10];

    char	src2[5] = "hello";
	char	dest2[10];

	ft_memmove(dest, src, 3);
    memmove(dest2, src2, 3);
	puts(dest);
    puts(dest2);
}*/