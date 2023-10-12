/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:33:08 by wpicanci          #+#    #+#             */
/*   Updated: 2023/10/05 16:33:09 by wpicanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n > 0)
	{
		*p = 0; 
		n--;
		p++;
	}
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	c[] = "hoje e feriado";
	ft_bzero(c, 3);
	printf("%s", c);
}*/
