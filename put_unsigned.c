/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_unsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:29:59 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/01/11 15:27:32 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_unsigned(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb < 10)
		count += put_char(nb + 48);
	else
	{
		count += put_unsigned(nb / 10);
		count += put_char((nb % 10) + 48);
	}
	return (count);
}
