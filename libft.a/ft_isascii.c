/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:44:51 by wpicanci          #+#    #+#             */
/*   Updated: 2023/10/03 18:44:53 by wpicanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127) 
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	resultado = ft_isascii(256);

	printf("retorna apenas caracter ASCII? %d", resultado);
}*/
