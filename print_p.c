/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:32:11 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/11 17:10:36 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == NULL)
		return (write (1, "0x0", 3));
	else
	{
		count += write (1, "0x", 2);
		count += print_x((unsigned long)ptr);
	}
	return (count);
}
