/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathain <mathain@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 09:30:26 by mathain           #+#    #+#             */
/*   Updated: 2026/11/27 09:53:12 by mathain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_int(int n);
int	ft_print_base(unsigned long n, char *base);
int	ft_print_ptr(void *p);
int	ft_printf(const char *format, ...);

#endif