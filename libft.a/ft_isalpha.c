/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:26:38 by wpicanci          #+#    #+#             */
/*   Updated: 2023/10/03 15:26:52 by wpicanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	c = '1';
	int	resultado = ft_isalpha(c);

	printf("retorna apenas caracter alfabetico? %d", resultado);
}*/
