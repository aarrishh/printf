/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:19:15 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/11 17:11:23 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (write (1, "(null)", 6));
	while (str[i])
		count += write(1, &str[i++], 1);
	return (count);
}
