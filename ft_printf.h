/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 17:02:13 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/25 20:21:37 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_putchar(char c);
void	ft_putnbr(long int n, char *base, int *count);
void	ft_putnbri(unsigned long int n, char *base, int *count);
int		ft_putstr(char *str);
int		ft_printf(const char *bon, ...);

#endif
