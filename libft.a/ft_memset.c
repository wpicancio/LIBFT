/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpicanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:32:56 by wpicanci          #+#    #+#             */
/*   Updated: 2023/10/05 15:32:58 by wpicanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) ptr;
	while (n > 0)
	{
		*p = (unsigned char) c;
		n--;
		p++;
	}
	return (ptr);
}

/*#include <stdio.h>
int	main()
{
	char	c[] = "hoje e feriado";
	ft_memset(c, 'a', 3);
	puts(c);
}*/
