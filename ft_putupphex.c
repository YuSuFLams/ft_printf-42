/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupphex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:59:27 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/22 13:46:40 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putupphex(unsigned int n, int *d)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n < 16)
		ft_putchar(base[n], d);
	else
	{
		ft_putupphex(n / 16, d);
		ft_putchar(base[n % 16], d);
	}
}
