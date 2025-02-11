/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:34:51 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/11 17:11:37 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += print_u(nb / 10);
		count += print_u(nb % 10);
	}
	else
		count += ft_putchar(nb + 48);
	return (count);
}
