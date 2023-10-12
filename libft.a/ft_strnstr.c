/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:29:20 by wpicanci          #+#    #+#             */
/*   Updated: 2023/10/11 15:29:21 by wpicanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		tamanho;

	i = 0;
	tamanho = (ft_strlen(little));
	if (*little == '\0')
		return ((char *) big);
	while (big[i] != '\0' && (i + tamanho) <= len)
	{
		if (ft_strncmp ((i + big), little, tamanho) == 0)
			return ((char *) big + i);
		i++;
	}
	return (0);
}

/*#include <bsd/string.h>
#include <string.h>

int	main()
{
	puts(ft_strnstr("quero viajar para suica", "para", 30));
	puts (strnstr("quero viajar para suica", "para", 30));
}*/