/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:01:51 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/22 13:45:24 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_uputnbr(unsigned int n, int *d)
{
	long	nb;

	nb = n;
	if (n < 10)
		ft_putchar(n + 48, d);
	else
	{
		ft_uputnbr(n / 10, d);
		ft_uputnbr(n % 10, d);
	}
}
