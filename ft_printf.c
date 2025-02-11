/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 21:49:42 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/11 17:06:58 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	deside_format(va_list *argument, char a)
{
	int	count;

	count = 0;
	if (a == 'c')
		count += ft_putchar((va_arg(*argument, int)));
	if (a == 's')
		count += print_s(va_arg(*argument, char *));
	else if (a == 'd' || a == 'i')
		count += print_d_i(va_arg(*argument, int));
	else if (a == 'u')
		count += print_u(va_arg(*argument, unsigned int));
	else if (a == 'p')
		count += print_p(va_arg(*argument, void *));
	else if (a == 'x')
		count += print_x(va_arg(*argument, unsigned int));
	else if (a == 'X')
		count += print_up_x(va_arg(*argument, unsigned int));
	else if (a == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	argument;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(argument, format);
	while (*format != '\0')
	{
		if (*format == '%')
			count += deside_format(&argument, *(++format));
		else
			count += write(1, format, 1);
		format++;
	}
	return (count);
}
