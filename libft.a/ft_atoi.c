/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:35:21 by wpicanci          #+#    #+#             */
/*   Updated: 2023/10/03 16:35:23 by wpicanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_simbol(const char *nptr, int *i, int *y)
{
	int	sinal;

	sinal = 0;
	while (nptr[*i] == '-' || nptr[*i] == '+')
	{
		if (sinal > 0)
			return (0);
		if (nptr[*i] == '-')
			*y *= -1;
		*i += 1;
		sinal++;
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	y;
	int	r;

	r = 0;
	i = 0;
	y = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (ft_simbol (nptr, &i, &y) == 0)
		return (0);
	while (nptr[i] >= '0' && nptr [i] <= '9')
	{
		r = r * 10 + (nptr[i] - 48);
		i++;
	}
	return (r * y);
}

/*#include <stdio.h>
int	main(void)
{
	puts(ft_atoi("\n\n\n  -46\b9 \n5d6"));
}*/