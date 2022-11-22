/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:20:41 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/22 13:49:33 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, int *d);
void	ft_putstr(char *s, int *d);
void	ft_putnbr(int nb, int *d);
void	ft_upointer(void *p, int *d, int first);
void	ft_putlowhex(unsigned int n, int *d);
void	ft_putupphex(unsigned int n, int *d);
void	ft_uputnbr(unsigned int n, int *d);
int		ft_printf(const char *str, ...);

#endif
