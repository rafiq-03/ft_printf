/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:49:17 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/01/10 16:01:24 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	address(unsigned long nb)
{
	char			*base;
	int				counter;

	base = "0123456789abcdef";
	counter = 0;
	if (nb < 16)
	{
		counter += put_char(base[nb]);
	}
	else
	{
		counter += address(nb / 16);
		counter += put_char(base[nb % 16]);
	}
	return (counter);
}

int	put_add(void *add)
{
	int				counter;
	unsigned long	nb;

	counter = 0;
	counter += put_str("0x");
	nb = (unsigned long)add;
	counter += address(nb);
	return (counter);
}
