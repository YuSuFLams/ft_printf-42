/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:33:22 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/22 13:44:39 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_upointer(void *p, int *d, int first)
{
	char			*base;
	unsigned long	n;

	base = "0123456789abcdef";
	n = (unsigned long)p;
	if (first == 0)
		ft_putstr("0x", d);
	if (n >= 16)
	{
		ft_upointer((void *)(n / 16), d, 1);
		ft_putchar(base[n % 16], d);
	}
	else
		ft_putchar(base[n], d);
}
