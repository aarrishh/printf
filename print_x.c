/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:37:18 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/11 17:12:34 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	base_x(char c)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	if (c >= '0' && c <= '9')
		return (write (1, &c, 1));
	else
	{
		i = c - 48;
		return (write (1, &base[i], 1));
	}
}

int	putnbr_x(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += putnbr_x(nb / 16);
		count += putnbr_x(nb % 16);
	}
	else
		count += base_x(nb + 48);
	return (count);
}

int	print_x(unsigned long number)
{
	int	count;

	count = putnbr_x(number);
	return (count);
}
