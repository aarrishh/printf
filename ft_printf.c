/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 21:49:42 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/08 19:32:46 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int deside_format(va_list argument, char a)
{
	int count;

	if (a == 's')
		count += print_string(argument, )
}

int ft_printf(const char *format, ...)
{
	va_list	argument;
	int		i;
	int		count;

	i = 0;
	va_start(argument, format);
	while (*format != '\0')
	{
		if (format[i] == '%')
			count += deside_format(argument, *(++format));
		else
			write (1, format, 1);
	}
}