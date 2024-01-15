/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:56:40 by rmarzouk          #+#    #+#             */
/*   Updated: 2024/01/11 15:27:39 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		put_char(char c);
int		put_str(char *str);
int		put_nbr(long nb);
int		put_hexa(unsigned int nb, char specifier);
int		put_add(void *add);
int		put_unsigned(unsigned long nb);
int		put_format(char specifier, va_list ap);

#endif