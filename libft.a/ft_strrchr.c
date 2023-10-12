/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:07:05 by wpicanci          #+#    #+#             */
/*   Updated: 2023/10/10 17:07:06 by wpicanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (i != 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *)s + i);
		i--;
	}
	if (s[0] == (unsigned char) c)
		return ((char *)s);
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char	str[] = "hoje e feriado";
	char	c = 'e';

	puts(ft_strrchr(str, 'e'));
	puts(strrchr(str, 'e'));
}*/