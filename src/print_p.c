/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:29:38 by nefimov           #+#    #+#             */
/*   Updated: 2024/12/03 11:30:06 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"
// #include "libft.h"

static int	get_hex_len(unsigned long num)
{
	int	i;

	i = 0;
	if (num == 0)
		i = 1;
	while (num > 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}

static int	print_phex(unsigned long n)
{
	char			s[19];
	int				i;
	char			*hex_base;

	hex_base = "0123456789abcdef";
	i = get_hex_len(n) - 1;
	ft_bzero(s, 19);
	while (i >= 0)
	{
		s[i--] = hex_base[n % 16];
		n /= 16;
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	print_pointer(void *p)
{
	unsigned long	p_num;

	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	p_num = (unsigned long) p;
	write(1, "0x", 2);
	return (print_phex(p_num) + 2);
}
