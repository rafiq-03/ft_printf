/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:55:57 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/01/11 13:43:49 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		count += put_str("(null)");
		return (count);
	}
	while (*str != '\0')
	{
		write (1, str, 1);
		count++;
		str++;
	}
	return (count);
}
