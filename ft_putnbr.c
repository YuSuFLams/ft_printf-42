/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:28:01 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/22 13:48:24 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *d)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-', d);
		n *= (-1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, d);
		ft_putnbr(n % 10, d);
	}
	else
		ft_putchar(n + 48, d);
}
