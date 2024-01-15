/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:38:24 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/01/11 13:45:27 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '\0')
				return (counter);
			i++;
			counter += put_format(str[i], ap);
		}
		else
			counter += put_char(str[i]);
		i++;
	}
	va_end(ap);
	return (counter);
}

int	put_format(char specifier, va_list ap)
{
	int	counter;

	counter = 0;
	if (specifier == 'c')
		counter += put_char(va_arg(ap, int));
	else if (specifier == 's')
		counter += put_str(va_arg(ap, char *));
	else if (specifier == 'p')
		counter += put_add(va_arg(ap, void *));
	else if (specifier == 'd')
		counter += put_nbr(va_arg(ap, int));
	else if (specifier == 'i')
		counter += put_nbr(va_arg(ap, int));
	else if (specifier == 'u')
		counter += put_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		counter += put_hexa(va_arg(ap, unsigned int), 'x');
	else if (specifier == 'X')
		counter += put_hexa(va_arg(ap, unsigned int), 'X');
	else
		counter += put_char(specifier);
	return (counter);
}
