/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathain <mathain@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 12:20:52 by mathain           #+#    #+#             */
/*   Updated: 2026/11/27 09:36:22 by mathain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_char(int c)
{
	char	ch;

	ch = (char)c;
	return (write(1, &ch, 1));
}

int	ft_print_str(char *s)
{
	if (!s)
		s = "(null)";
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	ft_print_int(int n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	if (!str)
		return (-1);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}

int	ft_print_base(unsigned long n, char *base)
{
	unsigned long	len;
	int				count;
	int				ret;

	len = ft_strlen(base);
	count = 0;
	if (n >= len)
	{
		ret = ft_print_base(n / len, base);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	ft_putchar_fd(base[n % len], 1);
	return (count + 1);
}
