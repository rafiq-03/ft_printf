/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:03:01 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/01/11 13:44:22 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count += put_char('-');
		nb *= -1;
	}
	if (nb < 10)
		count += put_char(nb + 48);
	else
	{
		count += put_nbr(nb / 10);
		count += put_char(nb % 10 + 48);
	}
	return (count);
}
