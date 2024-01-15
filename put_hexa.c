/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:09:30 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/01/10 17:35:58 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hexa(unsigned int nb, char specifier)
{
	char	*base;
	int		counter; 

	counter = 0;
	if (specifier == 'x')
		base = "0123456789abcdef";
	else if (specifier == 'X')
		base = "0123456789ABCDEF";
	if (nb < 16)
	{
		counter += put_char(base[nb]);
	}
	else
	{
		counter += put_hexa(nb / 16, specifier);
		counter += put_char(base[nb % 16]);
	}
	return (counter);
}
