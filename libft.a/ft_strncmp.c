/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:55:22 by wpicanci          #+#    #+#             */
/*   Updated: 2023/10/03 16:55:23 by wpicanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	size_t			i;

	st1 = (unsigned char *) s1;
	st2 = (unsigned char *) s2;
	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (st1[i] != st2[i])
		{
			return ((unsigned char)st1[i] - (unsigned char)st2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	x[] = "abcde";
	char	y[] = "abcec";
	int	resultado = ft_strncmp(x, y, 4);
	
	printf("retorne %d\n", resultado);
}*/
