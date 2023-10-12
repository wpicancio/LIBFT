/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:05:29 by wpicanci          #+#    #+#             */
/*   Updated: 2023/10/03 16:05:30 by wpicanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	c = '2';
	int	resultado = ft_isprint(c);
	
	printf("tem apenas carateres imprimiveis? %d", resultado);
}*/
